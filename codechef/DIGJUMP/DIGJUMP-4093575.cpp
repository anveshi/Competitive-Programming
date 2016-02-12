/** author ++Anveshi.shukla**/
#include<bits/stdc++.h>
#define inf 100000000
using namespace std;
char a[100010];       
int i,j,k,l,shukla[100010], minwell[10];
void magic(){
	for(i=2;i<l;i++){
		shukla[i]=min(shukla[i-1]+1,minwell[a[i]-'0'] +1);
		minwell[a[i]-'0']=min(minwell[a[i]-'0'],shukla[i]);k=i;
		while(shukla[k-1]>shukla[k]+1){
			shukla[k-1]=min(minwell[a[k-1]-'0']+1,shukla[k]+1);
			minwell[a[k-1]-'0']=min(shukla[k-1],minwell[a[k-1]-'0']);k--;
		}
	}
}

int main(){
	cin >> a;
	l=strlen(a);
	if(l==1){cout << 0 << endl;return 0;}
	else if(a[0]==a[l-1]){cout << 1 << endl;return 0;}
	for(i=0;i<=l;i++)shukla[i]=inf;
	shukla[0]=0;shukla[1]=1;
	for(i=0;i<10;i++) minwell[i] =inf;
	minwell[a[0]-'0']=0;
	if(minwell[a[1]-'0'] >1)minwell[a[1]-'0']=1;
	magic();magic();
	cout << shukla[l-1]<< endl;
	return 0;
}