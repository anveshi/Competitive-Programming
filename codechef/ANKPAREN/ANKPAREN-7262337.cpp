#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define all(c) (c).begin(),(c).end() 
#define tr(c,it) for(auto it = (c).begin(); it != (c).end(); it++) 
#define __ ios_base::sync_with_stdio(false);cin.tie(NULL);
#define TRACE
#ifdef TRACE
#define trace1(x)     	   cerr << #x << ": " << x << endl;
#define trace2(x, y)       cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)    cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#define trace4(a, b, c, d)
#endif
typedef long long LL;
const LL MOD = 1000000007;
typedef pair<LL,LL> PII;
typedef vector<LL> VI;
typedef vector<PII> VPII;
LL mpow(LL a, LL n){LL ret=1;LL b=a;while(n){if(n&1) ret=(ret*b)%MOD;b=(b*b)%MOD;n>>=1;}return (LL)ret;}
bool ArePair(char opening,char closing){
  if(opening == '(' && closing == ')') return true;
  return false;
}
bool AreParanthesesBalanced(string exp){
  stack <char>  S;
  for(int i =0;i<exp.length();i++){
    if(exp[i] == '(' )
      S.push(exp[i]);
    else if(exp[i] == ')' ){
      if(S.empty() || !ArePair(S.top(),exp[i]))
        return false;
      else
        S.pop();
    }
  }
  return S.empty() ? true:false;
}

int main(){
  int t,n,k,i,j;
  cin >> t;
  string s;
  while(t--){
    cin >> s;
    cin >> k;
    n = s.length();
    if(n%2==1){
      if(k==1)
        cout << s << endl;
      else cout << -1 << endl;
    }
    else{
      if(AreParanthesesBalanced(s)==0){
        if(k==1)
          cout << s << endl;
        else cout << -1 << endl;
      }
      else{
        int last = -11;
        vector <int> v;
        v.clear();
        for(i=0;i<n;i++){
          if(s[i]==')'){
            if(last!=i-1)
              v.pb(i);
            last = i;
          }
        }
        last = -11;
        for(i=n-1;i>=0;i--){
          if(s[i]=='('){
            if(last!=i+1)
              v.pb(i);
            last = i ;
          }
        }
        int sz = v.size();
        if(k>sz)cout << -1 << endl;
        else{
          int val = v[k-1];
          string ans = "";
          for(i=0;i<n;i++){
            if(val!=i)
              ans+=s[i];
          }
          cout << ans << endl;
        }
      }
    }
  }
  return 0;
}