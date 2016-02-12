#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int n,m;
vector <string> V;
int visited[50][50],level[50][50];
int valid(int xx,int yy){
	if((xx>=0&&xx<n)&&(yy>=0&&yy<m))return 1;
	return 0;
}
int checkloop(int x,int y){
	int i,j,x1,y1;
	pair<int,int>t;
	for(i=0;i<n;i++){for(j=0;j<m;j++){visited[i][j]=0;level[i][j]=0;}}
	stack< pair<int,int> > S;
	S.push(mp(x,y));
	level[x][y]=1;
	while(!S.empty()){
		t=S.top();
		S.pop();
		if(visited[t.ff][t.ss]==0){
			visited[t.ff][t.ss]=1;
			x1=t.ff;y1=t.ss;
			if(valid(x1-1,y1) && V[x1][y1]==V[x1-1][y1])
			{
				S.push(mp(x1-1,y1));
				level[x1-1][y1]=level[x1][y1]+1;
				if(level[x1-1][y1]>=4 && x1-1==x && y1==y)
					return 1;
			}
			if(valid(x1+1,y1) && V[x1][y1]==V[x1+1][y1])
			{
				S.push(mp(x1+1,y1));
				level[x1+1][y1]=level[x1][y1]+1;
				if(level[x1+1][y1]>=4 && x1+1==x && y1==y)
					return 1;
			}
			if(valid(x1,y1-1) && V[x1][y1]==V[x1][y1-1])
			{
				S.push(mp(x1,y1-1));
				level[x1][y1-1]=level[x1][y1]+1;
				if(level[x1][y1-1]>=4 && x1==x && y1-1==y)
					return 1;
			}
			if(valid(x1,y1+1) && V[x1][y1]==V[x1][y1+1])
			{
				S.push(mp(x1,y1+1));
				level[x1][y1+1]=level[x1][y1]+1;
				if(level[x1][y1+1]>=4 && x1==x && y1+1==y)
					return 1;
			}

		}

	}
	return 0;
}
int main(){
	int i,j,k;
	string s;
	cin >> n >> m;
	for(i=0;i<n;i++){
		cin >> s;
		V.pb(s);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(checkloop(i,j))
			{
				cout << "Yes" << endl;
				return 0;
			}
		}
	}
	cout << "No" << endl;
	return 0;
}