#include <bits/stdc++.h>
int sequence[2000004];
using namespace std;
int main(){
	int n,m,i,start;
	scanf("%d %d",&n,&m);
	memset(sequence,-1,sizeof(sequence));
	for(i=1;i<=2*n-1;i+=2)
		sequence[i]=0;
	if(m<n)start = 2;
	else start = 0;
	int cnt=0;
	for(i=start;;i+=2){
		if(cnt%(n+1)==0)
			i=start;
		if(sequence[i]==-1)sequence[i]=1;
		else sequence[i]++;
		if(sequence[i]>2){cout<<"-1"<<endl;return 0;}
		cnt++;
		if(cnt==m)break;
	}
	for(i=1;i<=2*n-1;i++){
		if(sequence[i]==-1){
			cout<<-1<<endl;return 0;
		}
	}

	for(i=0;i<m+n+1;i++){
		if(sequence[i]==-1)continue;
		else if(i%2==0){
			int x = sequence[i];
			while(x--)cout<<"1";
		}
		else cout<< "0";
	}
	cout << "\n";
	return 0;
}