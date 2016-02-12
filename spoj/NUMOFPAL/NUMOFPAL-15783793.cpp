#include <cstdio>
#include <cstring>
using namespace std;

const int Maxn = 1002;
char S[Maxn];

int P=31,Hash[Maxn][Maxn], Rhash[Maxn][Maxn];

int main(){
  scanf("%s",S);

  int N = strlen(S);
  for(int i=0;i<N;i++){
    Hash[i][i] = S[i];
    for(int j=i+1;j<N;j++){
      Hash[i][j] = Hash[i][j-1] * P + S[j];
    }
  }
  for(int i=N-1;i>=0;i--){
    Rhash[i][i] = S[i];
    for(int j=i-1;j>=0;j--){
      Rhash[i][j] = Rhash[i][j+1] * P + S[j];
    }
  }
  int Ans = 0;
  for(int i=0;i<N;i++){
    for(int j=i;j<N;j++){
      if(Hash[i][j] == Rhash[j][i])
        Ans++;
    }
  }
  printf("%d\n",Ans);
  return 0;
}
