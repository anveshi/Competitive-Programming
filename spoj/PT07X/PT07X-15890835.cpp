#include<bits/stdc++.h>
using namespace std;

#define F first
#define S second
#define REP(i,N) for(int i=0;i<(int)(N);i++)
#define MAXN 100005
typedef vector < pair < int , int > > VPII;

//for maximum bipartite matching
struct HopcroftKarp{
    vector<int> g[MAXN];
    int n,distX[MAXN],distY[MAXN],mateX[MAXN],mateY[MAXN];
    queue<int> q;
    inline void reset(int m){ n=m; REP(i,n) g[i].clear(); memset(mateX,-1,n*sizeof(int)); memset(mateY,-1,n*sizeof(int)); }
    inline void add_edge(int u,int v){ g[u].push_back(v); }
    inline bool bfs(){
        bool found=false; REP(i,n) if(mateX[i]==-1) q.push(i); REP(i,n) distX[i]=distY[i]=0;
        while(!q.empty()){
            int u=q.front(); q.pop();
            for(int i=0;i<(int)(g[u].size());i++){
                if(distY[g[u][i]]==0){
                    distY[g[u][i]]=distX[u]+1;
                    if(mateY[g[u][i]]==-1) found=true;
                    else distX[mateY[g[u][i]]]=distY[g[u][i]]+1,q.push(mateY[g[u][i]]);
                }
            }
        }
        return found;
    }
    bool dfs(int u){
        for(int i=0;i<(int)(g[u].size());i++){
            if(distY[g[u][i]]==distX[u]+1){
                distY[g[u][i]]=0;
                if(mateY[g[u][i]]==-1||dfs(mateY[g[u][i]])){ mateX[u]=g[u][i]; mateY[g[u][i]]=u; return true; }
            }
        }
        return false;
    }
    int find(){
        int res=0; while(bfs()) REP(i,n) if(mateX[i]==-1) if(dfs(i)) res++;
        return res;
    }
}graph;


int main(){
    int N,X,Y;
    while(cin >> N){
        graph.reset(N+1);
        for(int i=0;i<N-1;i++){
            cin >> X >> Y;
            graph.add_edge(X,Y);
            graph.add_edge(Y,X);
        }
        cout << graph.find()/2 << endl;
    }
    return 0;
}