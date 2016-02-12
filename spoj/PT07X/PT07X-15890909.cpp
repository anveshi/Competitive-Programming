#include <bits/stdc++.h>
using namespace std;

#define MAXN 200005 /// Maximum possible Number of nodes
#define MAXE 250001 /// Maximum possible Number of edges
#define INF (1<<29)
int ptr[MAXN],Next[MAXE],zu[MAXE];
int n,m,match[MAXN],D[MAXN],q[MAXN];

void init(int _n){ /// initialization _n=number of nodes
    n=_n;
    m=0;
    memset(ptr,~0,sizeof(int)*(n+1));
}
void add_edge(int u,int v){ /// Adding edge between u and v
    Next[m]=ptr[u];ptr[u]=m;zu[m]=v;++m;
}
bool bfs(){
    int u,v;
    register int i;
    int qh=0, qt=0;
    for(i=1; i<=n; i++){
        if(!match[i]){
            D[i]=0;
            q[qt++]=i;
        }
        else D[i]=INF;
    }
    D[0]=INF;
    while(qh<qt){
        u=q[qh++];
        if(u!=0){
            for(i=ptr[u]; ~i; i=Next[i]){
                v=zu[i];
                if(D[match[v]]==INF){
                    D[match[v]]=D[u]+1;
                    q[qt++]=match[v];
                }
            }
        }
    }
    return D[0]!=INF;
}
bool dfs(int u){
    int v;
    register int i;
    if(u){
        for(i=ptr[u]; ~i; i=Next[i]){
            v=zu[i];
            if(D[match[v]]==D[u]+1){
                if(dfs(match[v])){
                    match[v]=u;
                    match[u]=v;
                    return true;
                }
            }
        }
        D[u]=INF;
        return false;
    }
    return true;
}
int run(){
    int matching=0;
    register int i;
    while(bfs())
        for(i=1; i<=n; i++)
            if(!match[i] && dfs(i))
                matching++;
    return matching;
}
int main(){
    int N,X,Y;
    while(cin>>N){
        init(N+1);
        for(int i=0;i<N-1;i++){
            cin >> X >> Y;
            add_edge(X,Y);
            add_edge(Y,X);
        }
        cout <<  run() << endl;
    }
    return 0;
}
