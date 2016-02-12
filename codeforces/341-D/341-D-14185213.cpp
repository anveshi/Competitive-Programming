// Anve$hi $hukla
// Until the lion learns how to write, every story will glorify the hunter.

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

inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

const int Maxn = 1005;

LL tree[2][2][Maxn][Maxn];

void updatey(int x,int y,int Val,int t1,int t2){
  if(y<=0)
    return ;
  while(y<Maxn){
    tree[t1&1][t2&1][x][y] ^= Val;
    y += y&-y;
  }
}
void update(int x,int y,int Val){
  int t1=x,t2=y;
  if(x<=0)
    return;
  while(x<Maxn){
    updatey(x,y,Val,t1,t2);
    x += x&-x;
  }
}

LL ready(int x,int y,int t1,int t2){
  LL Sum = 0LL;
  while(y>0){
    Sum ^= tree[t1&1][t2&1][x][y];
    y -= y&-y;
  }
  return Sum;
}

LL read(int x,int y){
  LL Sum = 0LL,t1=x,t2=y;
  while(x>0){
    Sum ^= ready(x,y,t1,t2);
    x -= x&-x;
  }
  return Sum;
}


void printMatrix(int N){
  for(int i=1;i<=N;i++){
    for(int j=1;j<=N;j++){
      LL X0,X1,Y0,Y1;
      X0 = i-1;Y0=j-1;X1=i;Y1=j;
      LL Val = read(X0,Y0) ^ read(X0,Y1) ^ read(X1,Y0) ^ read(X1,Y1);
      cout << Val << " ";
    }
    cout << endl;
  }
  cout << endl;
}

int main(){
  fastIO();
  LL N,Q,Type,X0,X1,Y0,Y1,Val;
  cin >> N >> Q;

  while(Q--){
    cin >> Type >> X0 >> Y0 >> X1 >> Y1; 
    X0--;Y0--;
    if(Type == 1){
      LL Z = read(X0,Y0) ^ read(X0,Y1) ^ read(X1,Y0) ^ read(X1,Y1);
      cout << Z << endl;
    }
    else{
      cin >> Val;
      X0++;Y0++;X1++;Y1++;
      update(X0,Y0,Val);
      update(X0,Y1,Val);
      update(X1,Y0,Val);
      update(X1,Y1,Val);
      //printMatrix(N);
    }
  }
  return 0;
}