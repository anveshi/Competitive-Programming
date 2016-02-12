/*
If you think you are beaten, you are.
If you think you dare not, you don't!
If you like to win, but think you can't,
It's almost a cinch you won't.
you think you'll lose, you're lost;
For out in the world we find
Success begins with a fellow's will;
It's all in the state of mind.
If you think you are outclassed, you are,
You've got to think high to rise,
You've got to be sure of yourself before
You can ever win a prize.
Life's battles don't always go
To the stronger and faster man,
But sooner or later the man who wins
Is the man who thinks he can.
*/
#include <stdio.h>
#include <math.h>
const double billion = (double)(1e9);
int main(){
  long double P,ans1,ans2;
  int M,T;
  scanf("%d",&T);
  while(T--){
    scanf("%d %Lf",&M,&P);
    if(M&1)
      ans1 = (billion*(1.0+pow(P,M))) / (1.0+P);
    else
      ans1 = (billion*(1.0-pow(P,M))) / (1.0+P);
    ans2 = billion - ans1;
    printf("%0.2Lf %0.2Lf\n",ans1,ans2);
  }
  return 0;
}