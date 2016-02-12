/*
A smile costs nothing, but it creates much.
It enriches those who receive it without impoverishing those who give it.
It happens in a flash, and the memory of it may last forever.
None are so rich that they can get along without it, and
none so poor that they cannot be richer for its benefits.
It creates happiness in the home, fosters goodwill in a
business, and is the countersign of friends.
It is rest to the weary, daylight to the discouraged,
sunshine to the sad, and nature's best antidote for trouble.
Yet it cannot be begged, bought, borrowed, or stolen, for it
is something that is worth nothing to anyone until it is given away.
In the course of the day, some of your acquaintances may
be too tired to give you a smile. Give them one of yours.
Nobody needs a smile so much as those who have none
Left to give
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,o=0,e=0,oi,ei,x;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> x;
    if(x&1){
      oi=i+1;
      o++;
    }
    else{
      e++;
      ei=i+1;
    }
  }
  if(o==1)
    cout << oi << endl;
  else
    cout << ei << endl;
  return 0;
}