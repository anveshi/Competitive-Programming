#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL Maxn =1000000000000000000;
map<LL, LL> M;
void pre(){
  M.insert({1,1});
  M.insert({2,2});
  LL a,b,c,i,temp;
  a=1,b=2;c=a+b;
  i=3;
  while(c<=Maxn){
    M.insert({c,i});
    i++;
    temp = b;
    b = c;
    a = temp;
    c=a+b;
  }
 /* for(map<LL,LL>::iterator it=M.begin();it!=M.end();it++){
    cout << (it->first) << " " << (it->second) << endl;
  }*/
  return ;
}
int main(){
  pre();
  LL t,n,ans;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    auto it= M.lower_bound(n);
    if(it->first!=n)it--;
    printf("%lld\n",it->second);
  }
  return 0;
}