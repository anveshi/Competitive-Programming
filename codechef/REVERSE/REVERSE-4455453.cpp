#include<bits/stdc++.h>
using namespace std;
typedef vector<int> vi; 
typedef vector<vi> vvi; 
typedef pair<int,int> ii; 
#define sz(a) int((a).size()) 
#define pb push_back 
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(auto  i = (c).begin(); i != (c).end(); i++) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
int main()
{
	int n,m,a,b,j;
	scanf("%d %d",&n,&m);
	vector <  vector <  pair <int,int> >  >G(n+1);
	for(int i=0;i<m;i++)
	{
		scanf("%d %d",&a,&b);
		G[a].push_back(make_pair(b,0));
		G[b].push_back(make_pair(a,1));
	}
	vi D(n+1,1234567); 
	priority_queue<ii,vector<ii>, greater<ii> > Q; 
	D[1] = 0;
	Q.push(ii(0,1));
	while(!Q.empty()) {
		ii top = Q.top();
		Q.pop();
		int v = top.second, d = top.first;

		if(d <= D[v]) {
			tr(G[v], it) {
				int v2 = it->first, cost = it->second;
				if(D[v2] > D[v] + cost) {
					D[v2] = D[v] + cost;
					Q.push(ii(D[v2], v2));
				}
			}
		}
	}
//	for(int i=1;i<=n;i++)cout << D[i] << endl;
	if(D[n]!=1234567)printf("%d\n",D[n]);
	else printf("-1\n");
	return 0;
}