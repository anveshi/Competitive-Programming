/*
He slept beneath the moon
He basked beneath the sun
He lived a life of going to do
and died with nothing done.
*/
#include <bits/stdc++.h>
using namespace std;
int a[100005];
int main(){
  int x=0,y=0,z=0,n;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  for(int i=1;i<=n;i++){
    if(a[i]==25)
      x++;
    else if(a[i]==50){
      if(x>0)
        x--;
      else{
        cout << "NO" << endl;
        return 0;
      }
      y++;
    }
    else{
      if(y>0&&x>0){
        y--;x--;
      }
      else if(x>=3){
        x-=3;
      }
      else{
        cout << "NO" << endl;
        return 0;
      }
    }
  }
  cout << "YES" << endl;
  return 0;
}