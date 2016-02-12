/*
"I love you, Mother," said little John;
Then, forgetting his work, his cap went on,
And he was off to the garden swing,
And left her the water and wood to bring.
"I love you, Mother," said rosy Nell--
"I love you better than tongue can tell";
Then she teased and pouted full half the day,
Till her mother rejoiced when she went to play.
"I love you, Mother," said little Fan;
"Today I'll help you all I can;
How glad I am that school doesn't keep!"
So she rocked the babe till it fell asleep.
Then, stepping softly, she fetched the broom,
And swept the floor and tidied the room;
Busy and happy all day was she,
Helpful and happy as child could be.
"I love you, Mother," again they said,
Three little children going to bed;
How do you think that mother guessed
Which of them really loved her best?
*/
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
  LL n,x,sum=0LL,a;
  cin >> n >> x;
  for(int i=0;i<n;i++){
    cin>>a;
    sum+=a;
  }
  sum = fabs(sum);
  cout << (sum+x-1)/x << endl;
  return 0;
}