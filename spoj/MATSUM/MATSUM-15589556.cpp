#include <bits/stdc++.h>
using namespace std;
const int Maxn = 1<<11;
int Arr[Maxn][Maxn];

int tree[Maxn][Maxn];
void updatey(int x,int y,int Val){
  while(y<Maxn){
    tree[x][y] += Val;
    y += y&-y;
  }
}

void update(int x,int y,int Val){
  while(x<Maxn){
    updatey(x,y,Val);
    x += x&-x;
  }
}
int ready(int x,int y){
  int Sum = 0;
  while(y>0){
    Sum += tree[x][y];
    y -= y&-y;
  }
  return Sum;
}
int read(int x,int y){
  int Sum = 0;
  while(x>0){
    Sum += ready(x,y);
    x -= x&-x;
  }
  return Sum;
}

int main(){

  int T,N,X1,Y1,X2,Y2,Val;
  char S[5];
  scanf("%d",&T);

  while(T--){
    memset(Arr, 0, sizeof Arr);
    memset(tree, 0, sizeof tree);

    scanf("%d",&N);
    while(1){
      scanf("%s",S);
      if(S[1]=='N'){
        printf("\n");
        break;
      }
      else if(S[1]=='E'){
        scanf("%d %d %d",&X1,&Y1,&Val);
        X1++;Y1++;
        update(X1,Y1,Val-Arr[X1][Y1]);
        Arr[X1][Y1] = Val;
      }
      else if(S[1]=='U'){
        scanf("%d %d %d %d",&X1,&Y1,&X2,&Y2);
        X1;Y1;X2++;Y2++; 
        int Z = read(X2,Y2) + read(X1,Y1) - read(X1,Y2) - read(X2,Y1);
        printf("%d\n",Z);
      }
    }
  }
  return 0;
}