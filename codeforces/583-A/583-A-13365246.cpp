#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Maxn = 100005;
map<int, int> H,V;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n,x,y;
  cin >> n;
  H.clear();V.clear();
  for(int i=1;i<=n*n;i++){
    cin >> x >> y;
    if(H[x]==0 && V[y]==0){
      cout << i << " ";
      H[x]=1;V[y]=1;
    }
  }
  cout << endl;
  return 0;
}