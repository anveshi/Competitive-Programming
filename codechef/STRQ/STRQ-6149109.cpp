#include<bits/stdc++.h>
using namespace std;
long long  Q,Count[4][1000002],L,R,N;
long long PreAns[4][4][1000002]; 	// c=0,e=1,f=2,h=3;
char S[1000002],c1[2],c2[2];
map <char,long long > MAP;
long long  fun(long long  xx,long long  yy,long long  ll,long long  rr){
	long long  ans=0,zz;
	ans = ans + PreAns[xx][yy][rr]-PreAns[xx][yy][ll-1];
	zz = Count[xx][ll-1]*(Count[yy][rr] - Count[yy][ll-1]);
	ans-=zz;
	return ans;
}
int main(){
	MAP['c']=0;MAP['e']=1;MAP['f']=2;MAP['h']=3;
	scanf("%s",S);
	N = strlen(S);
	long long xo,yo,res;
	for(long long  i=0;i<4;i++){
		for(long long  j=1;j<=N;j++){
			Count[i][j]=Count[i][j-1];
			if(MAP[S[j-1]]==i)Count[i][j]++;
		}
	}

	for(long long  i=0;i<4;i++){
		for(long long  j=0;j<4;j++){
			if(i==j)continue;
			for(long long  k=1;k<=N;k++){
				PreAns[i][j][k]=PreAns[i][j][k-1];
				if(MAP[S[k-1]]==j){ 
					PreAns[i][j][k]+=(Count[i][k-1]);
				}
			}
		}
	}
	scanf("%lld",&Q);
	while(Q--){
		scanf("%s%s%lld%lld",c1,c2,&L,&R);
		xo=MAP[c1[0]];yo=MAP[c2[0]];
		res = fun(xo,yo,L,R) ;
		printf("%lld\n",res);
	}
	return 0;
}