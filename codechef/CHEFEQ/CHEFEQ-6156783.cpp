#include<bits/stdc++.h>
using namespace std;
int A[100005];
int main(){
	int T,N,i,MAX,x;
	scanf("%d",&T);
	while(T--){
		for(i=0;i<=100000;i++)A[i]=0;
		MAX=0;
		scanf("%d",&N);
		for(i=0;i<N;i++){
			scanf("%d",&x);
			A[x]++;
			if(A[x]>MAX)MAX=A[x];
		}
		printf("%d\n",N-MAX);
	}
	return 0;
}