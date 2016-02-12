#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main(){
	lol h,n,ans=0,i,mid;int temp;
	cin>>h>>n;
	temp=0;
	lol x=1,y=pow(2,h);
	while(1)
	{
		mid=(x+y)/2;
		if(x==y)
			break;
		if(n>mid){
			if(temp==1)
				ans++;
			else{
				ans=ans+pow(2,h);
				temp^=1;
			}
			h--;
			x=mid+1;
		}
		else if(n<=mid){
			if(temp==0)
				ans++;
			else{
				ans+=pow(2,h);
				temp^=1;
			}
			h--;
			y=mid;
		}
		temp^=1;
	}
	cout << ans << endl;
	return 0;
}