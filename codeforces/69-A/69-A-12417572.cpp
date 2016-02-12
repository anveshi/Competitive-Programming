/*
When things go wrong,
As they sometimes will,
When the road you're trudging seems all uphill,
When the funds are low and the debts are high,
And you want to smile, but you have to sigh,
When care is pressing you down a bit
Rest if you must, but don't you quit.
Life is queer with its twists and turns,
As every one of us sometimes learns,
And many a failure turns about
When he might have won had he stuck it out.
Don't give up though the pace seems slow
You may succeed with another blow.
Success is failure turned inside out
The silver tint of the clouds of doubt,
And you never can tell how close you are,
It may be near when it seems so far ;
So stick to the fight when you're hardest hit
It's when things seem worst that you mustn't quit.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,x,y,z,a=0,b=0,c=0;
  cin>>n;
  while(n--){
    cin >> x >> y >> z;
    a+=x;b+=y;c+=z;
  }
  puts(a|b|c?"NO":"YES");
  return 0;
}