#include <iostream>
using namespace std;
const int Maxn = 400004;
const int UP = 29;
int a[Maxn],available;
int dp1[Maxn],dp2[Maxn];
int Nextnode[30*Maxn+10][2];
void Insert(int bits){
  int Vertex = 0;
  for(int i=UP;i>=0;i--){
    if(bits&(1<<i)){
      if(Nextnode[Vertex][1]==0){
        Nextnode[Vertex][1] = available;
        available++;
      }
      Vertex = Nextnode[Vertex][1];
    }
    else{
      if(Nextnode[Vertex][0]==0){
        Nextnode[Vertex][0] = available;
        available++;
      }
      Vertex = Nextnode[Vertex][0];
    }
  }
}

int Query(int a){
  int Vertex = 0,ans=0;
  for(int i=UP;i>=0;i--){
    if((1<<i)&a){
      if(Nextnode[Vertex][0]==0)
        Vertex = Nextnode[Vertex][1];
      else{
        ans+=(1<<i);
        Vertex = Nextnode[Vertex][0];
      }
    }
    else{
      if(Nextnode[Vertex][1]==0)
        Vertex = Nextnode[Vertex][0];
      else{
        ans+=(1<<i);
        Vertex = Nextnode[Vertex][1];
      }
    }
  }
  return ans;
}
int main(){
  int n,curxor;
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
    scanf("%d",a+i);

  available=1;
  dp1[0] = 0;
  curxor = 0;
  Insert(0);
  for(int i=1;i<=n;i++){
    dp1[i] = a[i];
    curxor^=a[i];
    Insert(curxor);
    int ans;
    ans = Query(curxor);
    dp1[i] = max(dp1[i-1],dp1[i]);
    dp1[i] = max(dp1[i],ans);
  }
  for(int i=0;i<=(30*Maxn);i++){
    for(int j=0;j<2;j++){
      Nextnode[i][j]=0;
    }
  }
  dp2[n+1] = 0;
  curxor =0;
  available = 1;
  Insert(0);
  for(int i=n;i>=1;i--){
    dp2[i] = a[i];
    curxor^=a[i];
    Insert(curxor);
    int ans;
    ans = Query(curxor);
    dp2[i] = max(dp2[i+1],dp2[i]);
    dp2[i] = max(dp2[i],ans);
  }
  int res=0;
  for(int i=1;i<=n-1;i++){
    res = max(res,dp1[i]+dp2[i+1]);
  }
  printf("%d\n",res);
  return 0;
}