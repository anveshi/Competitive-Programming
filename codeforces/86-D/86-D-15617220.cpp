// Anve$hi $hukla
#include <bits/stdc++.h>
using namespace std;
// Mo's Algorithm

inline void fastIO(){
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
}

const int Maxn = 1000005;

class Mo{
   private:
      int Cnt[Maxn];
      long long CurAns = 0;
      void Process(long long Num, int dx){
         CurAns -= (long long)(Cnt[Num]) * (long long)Cnt[Num] * Num;
         Cnt[Num] += dx;
         CurAns += (long long)(Cnt[Num]) * (long long)Cnt[Num] * Num;
      }

   public:
      Mo(){
         memset(Cnt, 0, sizeof Cnt);
         CurAns = 0LL;
      }
      void Add(long long x){
         Process(x, 1);
      }
      void Remove(long long x){
         Process(x, -1);
      }
      long long get_Answer(){
         return CurAns;
      }
};

int A[Maxn], BLOCK_SIZE;
typedef pair<int,int> pii;
typedef pair<pii, int> ppii;
ppii Query[Maxn];
long long Ans[Maxn];

inline bool Mo_cmp(ppii X, ppii Y){
   int block1 = X.first.first/ BLOCK_SIZE;
   int block2 = Y.first.first/ BLOCK_SIZE;
   if(block1 != block2)
      return block1 < block2;
   return X.first.second > Y.first.second;
}

int main(){
   fastIO();
   int N, Q, L, R;
   cin >> N >> Q;
   BLOCK_SIZE = sqrt(N);

   for(int i=0;i<N;i++)
      cin >> A[i];

   for(int i=0;i<Q;i++){
      cin >> L >> R;
      L--; R--;
      Query[i].first.first = L; Query[i].first.second = R;
      Query[i].second = i;
   }

   sort(Query, Query+Q, Mo_cmp);
   Mo MOSolver;
   int mo_left = 0, mo_right = -1;
   
   for(int i=0;i<Q;i++){
      int left = Query[i].first.first, right = Query[i].first.second;
      while(mo_left < left){
         MOSolver.Remove(A[mo_left]);
         mo_left++;
      }  
      while(mo_left > left){
         mo_left--;
         MOSolver.Add(A[mo_left]);
      }
      while(mo_right > right){
         MOSolver.Remove(A[mo_right]);
         mo_right--;
      }
      while(mo_right < right){
         mo_right++;
         MOSolver.Add(A[mo_right]);
      }
      Ans[Query[i].second] = MOSolver.get_Answer();
   }
   for(int i=0;i<Q;i++)
      cout << Ans[i] << '\n';   

   return 0;
}