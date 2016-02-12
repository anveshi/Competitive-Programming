#include <bits/stdc++.h>
typedef long long LL;
using namespace std;
int main(){
  map<LL, LL> M;
  M[0]=0;
  LL prev = 0;
  for(LL i=5;prev<1000000000000;i*=2){
    M[i+prev]=1;
    prev += i;
  }
  LL n;
  cin >> n;
  map<LL, LL> :: iterator itlow,itup;
  itup = M.lower_bound(n);
  itlow=itup;
  itlow--;
  LL x,y,noe;
  x = itlow->first;
  y = itup->first;
  noe = (y-x)/5;
  if(n==x)
    cout << "Howard" << endl;
  if(((n-x-1)/noe)==0)
    cout << "Sheldon" << endl;
  else if(((n-x-1)/noe)==1)
    cout << "Leonard" << endl;
  else if(((n-x-1)/noe)==2)
    cout << "Penny" << endl;
  else if(((n-x-1)/noe)==3)
    cout << "Rajesh" << endl;
    else if(((n-x-1)/noe)==4)
    cout << "Howard" << endl;
  return 0;
}