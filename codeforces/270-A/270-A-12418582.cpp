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
int main(){
  int t,n;
  cin >> t;
  while(t--){
    cin >> n;
    if((360%(180-n))==0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
  return 0;
}