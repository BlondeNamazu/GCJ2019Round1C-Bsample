# GCJ Interactive memo

This repository contains sample answer code for GCJ2019 Round1C Problem B.
Since GCJ interactive problem requires specific input/output rules as follows.

1. Each stdout (inquiry/answer) should be flushed every after output.
2. You can output answer before you inquiry INQUIRY\_LIMIT time.
3. You should catch judge result after you answered.
4. If your answer was incorrect, you should stop the program.

If you don't meet above requirements, judge says `TLE` although it shouldn't.

```cpp:bmain.cpp
int main() {
  ll T,F;
  cin >> T >> F;
  REP(t,T){
    vector<vl> first(5,vl(0));
    vector<vl> second(5,vl(0));
    vector<vl> third(5,vl(0));
    vl candf;
    vl cands;
    ll candt;
    string ans = "";
    REP(i,119){
      // Rule 1
      // only you need is output endl after your inquiry/answer.
      cout << 5*i+1 << endl;
      char c;
      cin >> c;
      first[c-'A'].push_back(i);
    }
    REP(i,5){
      if(first[i].size()==23){
        REP(j,first[i].size()) candf.push_back(first[i][j]);
        ans += (char)('A'+i);
        break;
      }
    }
    REP(i,23){
      ll it = candf[i];
      // Rule 1
      // only you need is output endl after your inquiry/answer.
      cout << 5*it+2 << endl;
      char c;
      cin >> c;
      second[c-'A'].push_back(it);
    }
    REP(i,5){
      if(second[i].size()==5){
        REP(j,second[i].size()) cands.push_back(second[i][j]);
        ans += (char)('A'+i);
        break;
      }
    }
    REP(i,5){
      ll it = cands[i];
      // Rule 1
      // only you need is output endl after your inquiry/answer.
      cout << 5*it+3 << endl;
      char c;
      cin >> c;
      third[c-'A'].push_back(it);
    }
    REP(i,5){
      if(third[i].size()==1){
        REP(j,third[i].size()) candt = third[i][j];
        ans += (char)('A'+i);
        break;
      }
    }
    char c4,c5;
    // Rule 1
    // only you need is output endl after your inquiry/answer.
    cout << 5*candt+4 << endl;
    cin >> c5;
    // Rule 2
    // only you need is output endl after your inquiry/answer.
    cout << 5*candt+5 << endl;
    cin >> c4;
    ans += c4;
    ans += c5;

    // Rule 1
    // only you need is output endl after your inquiry/answer.
    // Rule 4
    // You can output answer before you inquiry INQUIRY_LIMIT time. 
    cout << ans << endl;

    // Rule 3
    // You should catch judge result after you answered.
    char ret;
    cin >> ret;
    // Rule 4
    // If your answer was incorrect, you should stop the program.
    if(ret!='Y') break;
  }
  return 0;
}
```
