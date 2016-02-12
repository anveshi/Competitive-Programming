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
int main(){
  int t,n,f=1;
  string s1,s2;
  cin >> t;
  while(t--){
    cin >> s1 >> s2;
    f=1;
    n = s1.length();
    for(int i=0;i<n;i++){
      if(s1[i]=='?' || s2[i]=='?')
        continue;
      else{
        if(s1[i]!=s2[i])
          f=0;
      }
    }
    if(f==1)
      cout << "Yes" << endl;
    else
      cout <<  "No" << endl;
  }
	return 0;
}