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
string s1,s2,s3;
int main(){  
  fastIO();
  int n,t;
  cin >> n >> t;
  if(n==1 && t==10){
    cout << -1 << endl;
    return 0;
  }

  cout << t;
  int val = n-1;
  if(t==10)val--;
  for(int i=0;i<val;i++){
    cout << "0" ;
  }
  cout << endl;
  return 0;
}