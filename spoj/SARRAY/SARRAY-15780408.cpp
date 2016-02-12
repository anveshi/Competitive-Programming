/*

  Suffix Array implementation O(n*(log(n));
  SA[i] = j ; ==> Str.substr(j,n-j) is i'th lexiographically smallest suffix
  Rank[i] = j ; ==> Str.substr(i,n-i) is j'th lexiographically smallest suffix
  LCP[i] = j ; ==> Suffix(SA[i]) = Str.substr(SA[i], n-SA[i]);
  LCP of Suffix(SA[i-1]) & Suffix(SA[i]) = j;   

*/

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int Maxn = 123456;

string S;
char Str[Maxn];
int Rank[Maxn], SA[Maxn], LCP[Maxn];
int Cnt[Maxn], Next[Maxn];
bool bh[Maxn], b2h[Maxn];

bool smaller_first_char(int a,int b){
  return Str[a] < Str[b];
}

void SuffixSort(int n){
  for(int i=0;i<n;i++)
    SA[i] = i;
  sort(SA, SA+n, smaller_first_char);
  for(int i=0;i<n;i++){
    bh[i] = i ==0 || Str[SA[i]] != Str[SA[i-1]];
    b2h[i] = false;
  }

  for(int h=1;h<n;h <<= 1){
    int buckets = 0;
    for(int i=0,j;i<n;i=j){
      j = i+1;
      while(j<n && !bh[j])
        j++;
      Next[i] = j;
      buckets++;
    }
    if(buckets == n)
      break;
    for(int i=0;i<n;i=Next[i]){
      Cnt[i] = 0;
      for(int j=i;j<Next[i];j++){
        Rank[SA[j]] = i;
      }
    }
    Cnt[Rank[n-h]]++;
    b2h[Rank[n-h]] = true;
    for(int i=0;i<n;i=Next[i]){
      for(int j=i;j<Next[i];j++){
        int s = SA[j] - h;
        if(s>=0){
          int head = Rank[s];
          Rank[s] = head + Cnt[head]++;
          b2h[Rank[s]] = true;
        }
      }
      for(int j=i;j<Next[i];j++){
        int s = SA[j]-h;
        if(s>=0 && b2h[Rank[s]]){
          for(int k=Rank[s]+1;!bh[k] && b2h[k];k++){
            b2h[k] = false;
          }
        }
      }
    }
    for(int i=0;i<n;i++){
      SA[Rank[i]] = i;
      bh[i] |= b2h[i];
    }
  }
  for(int i=0;i<n;i++){
    Rank[SA[i]] = i;
  }
  return ;
}



// LCP[i] = length of longest common prefix of suffix SA[i] and SA[i-1];
// LCP[0] = 0;

void getLCP(int n){
  for(int i=0;i<n;i++)
    Rank[SA[i]] = i;
  LCP[0] = 0;
  for(int i=0, h=0;i<n;i++){
    if(Rank[i]>0){
      int j = SA[Rank[i]-1];
      while(i+h<n && j+h<n && Str[i+h]==Str[j+h])
        h++;
      LCP[Rank[i]] = h;
      if(h>0)
        h--;
    }
  }
}

void Solve(){
  int N = S.size();
  for(int i=0;i<N;i++)
    Str[i] = S[i];
  SuffixSort(N);
  /*getLCP(N);
  LL Z = N;
  LL Ans = (Z*(Z+1))/2;
  for(int i=0;i<N;i++)
    Ans -= LCP[i];
  cout << Ans << endl;*/
  for(int i=0;i<N;i++){
    cout << SA[i] << endl;    
  }
  return;
}

void Print(int *A,int n){
  for(int i=0;i<n;i++){
    cout << A[i] <<  " ";
  }
  cout << endl;
}
void PrintArrays(int *A, int *B, int *C, int n){
  Print(A,n);
  Print(B,n);
  Print(C,n);
  return;
}
void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}

int main(){
  fastIO();
  int T=1;
  while(T--){
    cin >> S;
    Solve();
    // int n = S.size();
    // PrintArrays(Rank, SA, LCP, n);
  }
  return 0;
}