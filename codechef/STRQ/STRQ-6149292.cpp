#include<bits/stdc++.h>
using namespace std;
long long  Q,Count[4][1000002],L,R,N;
long long PreAns[4][4][1000002]; 	// c=0,e=1,f=2,h=3;
char S[1000002],c1[2],c2[2];
int VAL[1000002];
map <char,long long > MAP;
long long  fun(long long  xx,long long  yy,long long  ll,long long  rr){
	long long  ans=0,zz;
	ans = ans + PreAns[xx][yy][rr]-PreAns[xx][yy][ll-1];
	zz = Count[xx][ll-1]*(Count[yy][rr] - Count[yy][ll-1]);
	ans-=zz;
	return ans;
}
int main(){
//	MAP['c']=0;MAP['e']=1;MAP['f']=2;MAP['h']=3;
	scanf("%s",S);
	N = strlen(S);
	for(int i=0;i<N;i++){
		if(S[i]=='c')VAL[i]=0;
		else if(S[i]=='e')VAL[i]=1;
		else if(S[i]=='f')VAL[i]=2;
		else VAL[i]=3;
	}
	long long xo,yo,res;
	for(long long  i=0;i<4;i++){
		for(long long  j=1;j<=N;j++){
			Count[i][j]=Count[i][j-1];
			if(VAL[j-1]==i)Count[i][j]++;
		}
	}

	for(long long  i=0;i<4;i++){
		for(long long  j=0;j<4;j++){
			if(i==j)continue;
			for(long long  k=1;k<=N;k++){
				PreAns[i][j][k]=PreAns[i][j][k-1];
				if(VAL[k-1]==j){ 
					PreAns[i][j][k]+=(Count[i][k-1]);
				}
			}
		}
	}
	scanf("%lld",&Q);
	while(Q--){
		scanf("%s%s%lld%lld",c1,c2,&L,&R);
//		xo=MAP[c1[0]];yo=MAP[c2[0]];
		if(c1[0]=='c')xo=0;else if(c1[0]=='e')xo=1;else if(c1[0]=='f')xo=2;else xo=3;
		if(c2[0]=='c')yo=0;else if(c2[0]=='e')yo=1;else if(c2[0]=='f')yo=2;else yo=3;
		res = fun(xo,yo,L,R) ;
		printf("%lld\n",res);
	}
	return 0;
}