#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

const LL Mod = 1000000007;
const LL Maxn = 200005;
LL MaxVal;
LL N[Maxn],tree[Maxn];

LL read(LL idx){
    LL sum = 0;
    while (idx > 0){
        sum += tree[idx];
        sum%=Mod;
        idx -= (idx & -idx);
    }
    sum%=Mod;
    return sum;
}

void update(LL idx ,LL val){
    while (idx <= MaxVal){
        tree[idx] += val;
        tree[idx]%=Mod;
        idx += (idx & -idx);
    }
}
void solve(LL b){
  update(b,1);
  for(LL i=b-1;i>=1;i--){
    LL val1 = read(i+N[i]);
    update(i,val1);
  }
}


LL fun(LL X){
  LL ret = read(X) - read(X-1);
  return ((ret<0)?ret+Mod:ret);
}

int main(){
  LL n,b,q;
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cin >> n >> b;
  MaxVal = n+1;
  for(LL i=1;i<=n;i++){
    cin >> N[i];
  }
  solve(b);
  cin >> q;
  for(LL i=0;i<q;i++){
    LL X;
    cin >> X;
    LL val = fun(X);
    cout << val << endl;
  }
  return 0;
}