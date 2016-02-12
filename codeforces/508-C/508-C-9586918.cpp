#include<bits/stdc++.h>
#define lol long long int
using namespace std;
int m,t,r,w[305],can=0,flag=0;
map <int,int> used;
int burning[305];
int main(){
	int i,j,k;
	scanf("%d %d %d",&m,&t,&r);
	for(i=1;i<=m;i++)
		scanf("%d",&w[i]);
	for(i=1;i<=m;i++){
		for(j=w[i]-1;j>=w[i]-t;j--){
			if(burning[i]>=r)break;
			if(used[j])continue;
			else{ 
				used[j]=1;
				for(k=i;k<=m;k++){
					if(j+t>=w[k])burning[k]++;
					else break;
				}
				can++;
			}
		}
		if(burning[i]<r){flag=1;break;}
	}
	if(flag==1)
		printf("-1\n");
	else 
		printf("%d\n",can);
	return 0;
}