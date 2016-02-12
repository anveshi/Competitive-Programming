// Anve$hi $hukla
// ground - You can't fall if you don't climb, 
// but there's no joy in living your whole life on the ground.

#include <bits/stdc++.h>
using namespace std;

#define TRACE
#ifdef TRACE
#define trace1(x)       cerr<< #x <<": "<<x<<endl;
#define trace2(x, y)    cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<< endl;
#define trace3(x, y, z) cerr<< #x <<": "<<x<<" | "<< #y <<": "<<y<<" | "<< #z <<": "<<z<< endl;
#else
#define trace1(x)
#define trace2(x, y)
#define trace3(x, y, z)
#endif
class BIT{
  // 1 indexed

  int *tree, sz; 
  public:
  BIT(){
    sz = 200005;
    tree = new int[sz+1];
  }
  BIT(int N) {
    sz = N;
    tree = new int[N+1];
  }

  ~BIT() {
    delete [] tree;
  }

  // Update idx'th element by Val 
  // increment or decrement idx'th element by Val 
  void update(int idx, int Val){
    if(idx<1 || idx>sz)
      return;
    while(idx<=sz){
      tree[idx] += Val;
      idx += idx&-idx;
    }
  }

  // returns sum of range[1.....idx]

  int read(int idx){
    int Sum = 0;
    while(idx>0){
      Sum += tree[idx];
      idx -= (idx&-idx);
    }
    return Sum;
  }

  // returns sum of range[l.....r]
  int rangeSum(int l, int r){
    return read(r) - read(l-1);
  }

  // returns same as 
  // RangeSum(idx,idx) or read(idx) - read(idx-1)
  // O(log(n)); instead of 2*O(log(n))

  int readSingle(int idx){
    int sum = tree[idx]; // sum will be decreased
    if (idx > 0){ // special case
      int z = idx - (idx & -idx); // make z first
      idx--; // idx is no important any more, so instead y, you can use idx
      while (idx != z){ // at some iteration idx (y) will become z
        sum -= tree[idx]; 
        // substruct tree frequency which is between y and "the same path"
        idx -= (idx & -idx);
      }
    }
    return sum;
  }
};


typedef long long LL;
inline void fastIO(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
}
const int Maxn = 200005;
int A[Maxn],C[Maxn];
vector <int> edges[Maxn];
int IN[Maxn], OUT[Maxn];
int dt;
bool visited[Maxn],H[Maxn];

pair <int, int> PO[Maxn];
pair <int, int> PE[Maxn];

void dfs(int node){
  visited[node] = true;
  IN[node] = ++dt;
  for(int i=0;i<edges[node].size();i++){
    int Vertex = edges[node][i];
    if(!visited[Vertex]){
      H[Vertex] = H[node]^1;
      dfs(Vertex);
    }
  }
  OUT[node] = ++dt;
}
map <int, int> MO,ME;

int B_S1(int st,int end, int t){
  //trace3(st,end,IN[t]);
  if(end-st<5){
    int Ans = 10000000;
    for(int i=end;i>=st;i--){
      if(PO[i].first >= t)
        Ans = i;
    }
    return Ans;
  }
  int mid = (end + st)/2;
  if(PO[mid].first<=t){
    return B_S1(mid,end,t);
  }
  else{
    return B_S1(st,mid,t);
  }
}


int B_S2(int st,int end, int t){
  if(end-st<5){
    int Ans = -1;
    for(int i=st;i<=end;i++){
      if(PO[i].first <= t)
        Ans = i;
    }
    return Ans;
  }
  int mid = (end + st)/2;
  if(PO[mid].first<=t){
    return B_S2(mid,end,t);
  }
  else{
    return B_S2(st,mid,t);
  }
}


int B_S3(int st,int end, int t){
  //trace3(st,end,IN[t]);
  if(end-st<5){
    int Ans = 10000000;
    for(int i=end;i>=st;i--){
      if(PE[i].first >= t)
        Ans = i;
    }
    return Ans;
  }
  int mid = (end + st)/2;
  if(PE[mid].first<=t){
    return B_S3(mid,end,t);
  }
  else{
    return B_S3(st,mid,t);
  }
}


int B_S4(int st,int end, int t){
  if(end-st<5){
    int Ans = -1;
    for(int i=st;i<=end;i++){
      if(PE[i].first <= t)
        Ans = i;
    }
    return Ans;
  }
  int mid = (end + st)/2;
  if(PE[mid].first<=t){
    return B_S4(mid,end,t);
  }
  else{
    return B_S4(st,mid,t);
  }
}

int main(){
  fastIO();
  int N,Q,X,Y,Val,Type;
  cin >> N >> Q;
  for(int i=1;i<=N;i++){
    cin >> A[i]; // initial values
  }
  for(int i=0;i<N-1;i++){
    cin >> X >> Y;
    edges[X].push_back(Y);
    edges[Y].push_back(X);
  }
  H[0] = 0;
  dfs(1);
  int idxo = 0,idxe = 0;
  for(int i=1;i<=N;i++){
    if(H[i])
      PO[++idxo] = {IN[i],i};
    else
      PE[++idxe] = {IN[i],i};
  }

  sort(PO+1, PO+idxo+1);
  sort(PE+1, PE+idxe+1);
/*
  for(int i=1;i<=idxo;i++)
    trace2(PO[i].first, PO[i].second);
  for(int i=1;i<=idxe;i++)
    trace2(PE[i].first, PE[i].second);
  for(int i=1;i<=N;i++)
    trace2(i,H[i]);
*/

  for(int i=1;i<=idxo;i++)
    MO[PO[i].second] = i;
  for(int i=1;i<=idxe;i++)
    ME[PE[i].second] = i;
  

  BIT BO,BE;

  while(Q--){
    cin >> Type;
    if(Type == 1){
      cin >> X >> Val;
      if(H[X]){
        // odd height add val
        int ST=10000000,END=-1,flag=0;
        /* Write binary search */
           
       // trace2(ST,END);
        ST = B_S1(1,idxo,IN[X]);
        END = B_S2(1,idxo,OUT[X]);
        //trace2(ST,END);

        //trace2(ST,END);
        if(ST<=END){
          BO.update(ST,Val);
          BO.update(END+1,-Val);
        }
        // even add -val
        ST=10000000,END=-1,flag=0;
    
        ST = B_S3(1,idxe,IN[X]);
        END = B_S4(1,idxe,OUT[X]);
        //trace2(ST,END);
        if(ST<=END){
          BE.update(ST,-Val);
          BE.update(END+1,Val);
        }
      }
      else{
        // Even
        // H[X] == even;
      //  trace1(H[X]);
        int ST=10000000,END=-1,flag=0;
          
        ST = B_S3(1,idxe,IN[X]);
        END = B_S4(1,idxe,OUT[X]);
       // trace2(ST,END);
        if(ST<=END){
          BE.update(ST,Val);
          BE.update(END+1,-Val);
        }
        // odd add -val
        ST=10000000,END=-1,flag=0;
       
        ST = B_S1(1,idxo,IN[X]);
        END = B_S2(1,idxo,OUT[X]);
        //trace2(ST,END);
        if(ST<=END){
          BO.update(ST,-Val);
          BO.update(END+1,Val);
        }
      }
    }
    else if(Type == 2){
      cin >> X;
      if(H[X]){
        // Odd
        int idx = MO[X];
        cout << BO.read(idx) + A[X] << endl;
      }
      else{
        // even
        int idx = ME[X];
        cout << BE.read(idx) + A[X] << endl;
      }
    }
  }
  return 0;
}