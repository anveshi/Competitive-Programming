/*
To laugh is to risk appearing the fool.
To weep is to risk appearing sentimental.
To reach outfox another is to risk involvement.
To expose feelings is to risk exposing your true self.
To place your ideas, your dreams, before a crowd is to risk their loss.
To love is to risk not being loved in return.
To live is to risk dying.
To hope is to risk despair.
To try is to risk failure.
But risks must be taken, because the greatest
hazard in life is to risk nothing.
The person who risks nothing, does nothing, has
nothing, and is nothing.
They may avoid suffering and sorrow, but they
cannot learn, feel, change, grow, love, or live.
Chained by their attitudes, they are slaves,
they have forfeited their freedom.
Only a person who risks is free.
*/
#include <bits/stdc++.h>
using namespace std;
int a[12];
int main(){
  int k,s=0;
  cin >> k;
  for(int i=0;i<12;i++){
   cin >> a[i]; 
  }
  if(!k){
    cout << k << endl;
    return 0;
  }
  sort(a,a+12);
  int ans=0;
  for(int i=11;i>=0;i--){
    s+=a[i];
    ans++;
    if(s>=k){
      cout << ans << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}