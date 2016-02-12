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
#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const LL Maxn = 200002;
LL a[Maxn],l[Maxn],r[Maxn];
int main(){
  LL n;
  cin >> n;
  for(int i=1;i<=n;i++){
    cin >> a[i];
  }
  stack <LL> S;
  for(int i=1;i<=n;i++){
    while(!S.empty() && a[S.top()]>=a[i])
      S.pop();
    if(S.empty())
      l[i]=0;
    else
      l[i]=S.top();
    S.push(i);
  }
  while(!S.empty())
    S.pop();
  for(int i=n;i>=1;i--){
    while(!S.empty() && a[S.top()]>=a[i])
      S.pop();
    if(S.empty())
      r[i]=n+1;
    else
      r[i]=S.top();
    S.push(i);
  }
  vector <pair <int,int> > v;
  for(int i=1;i<=n;i++){
    v.push_back({a[i],r[i]-l[i]-1});
    //cout << l[i] << " " << r[i] << "\n";
  }
  sort(v.rbegin(), v.rend());
  /*for(int i=0;i<n;i++){
    cout << v[i].first << " " << v[i].second << endl;
  }*/
  int idx = 0;
  int ans[Maxn];
  for(int i=1;i<=n;i++){
    while(v[idx].second<i)
      idx++;
    if(v[idx].second>=i)
      ans[i] = v[idx].first;
  }
  for(int i=1;i<=n;i++){
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}