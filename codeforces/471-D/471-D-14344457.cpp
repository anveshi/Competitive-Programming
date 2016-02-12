#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace1(x)       cerr<< #x <<": "<<x<<endl;
#define trace2(x, y)    cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<< endl;
#define trace3(x, y, z) cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<<" | "<< #z <<": "<<z<< endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#endif

typedef long long LL;

void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}


vector <int> Kmp_prefix_function(vector <int> s){
  int n = s.size();
  vector <int> pi(n,0);
  for(int i=1;i<n;i++){
    int j = pi[i-1];
    while(j>0 && s[i]!=s[j])
      j = pi[j-1];
    if(s[i]==s[j])
      j++;
    pi[i] = j;   
  }
  return pi;
}



vector <int> KMP(const vector <int> haystack, const vector <int> needle){
  vector <int> ret;
  int m = haystack.size();
  int n = needle.size();
  vector <int> Z;
  for(int i=0;i<n;i++){
    Z.push_back(needle[i]);
  }
  Z.push_back(INT_MIN);
  for(int i=0;i<m;i++){
    Z.push_back(haystack[i]);
  }
  vector <int> pf = Kmp_prefix_function(Z);

  for(int i=n+1;i<=n+m;i++){
    if(pf[i]==n){
      int idx = i - (n+1) - n + 1; 
      ret.push_back(idx);
    }
  }
  return ret;
}

const int Maxn = 200005;
int a[Maxn],b[Maxn];
vector <int> A,B;
int main(){
  fastIO();
  int n,w;
  cin >> n >> w;
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  for(int i=0;i<w;i++){
    cin >> b[i];
  }
  for(int i=1;i<n;i++){
    A.push_back(a[i]-a[i-1]);
  }
  for(int i=1;i<w;i++){
    B.push_back(b[i]-b[i-1]);
  }

  if(w==1){
    cout << n << endl;
    return 0;
  }
  vector <int> Ans = KMP(A,B);
  cout << Ans.size() << endl;
  return 0;
}