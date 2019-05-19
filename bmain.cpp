/*{{{*/
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
// pll pp; -> (pp.first,pp.second)
// vector<vl> pp(n,vl(2)); sort(pp.begin(),pp.end(),[](vl a,vl b){return a[0]<b[0];});

#define REP(i,n) for(ll (i)=0;(i)<(n);(i)++)
#define RREP(i,n) for(ll (i)=(n)-1;(i)>=0;(i)--)
#define DEBUG(x) cout << #x << ": " << x << endl
#define CHMAX(a,b) a=max((a),(b))
#define CHMIN(a,b) a=min((a),(b))
/*}}}*/
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
