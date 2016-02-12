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
int a[101][101];
int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin >> a[i][j];
    }
  }
  for(int i=0;i<3;i++){
    int temp=0;
     for(int j=0;j<n;j++){
        temp +=a[j][i];
     }
     if(temp){
      cout << "NO" << endl;
      return 0;
     }
   } 
   cout << "YES" << endl;
  return 0;
}