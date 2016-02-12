#include <bits/stdc++.h>
#define LL long long int
using namespace std;
int main(){
	LL i,j,m,n;
	LL a[100005];
	LL d[100005];
	set <LL> diff,SET;
	cin >> n;
	for(i=0;i<n;i++)cin >> a[i];
	sort(a,a+n);
	for(i=0;i<n;i++){SET.insert(a[i]);if(i){d[i]=a[i]-a[i-1];diff.insert(d[i]);}}
	if(n==1){
		cout << -1 << endl;
	}
	else if(diff.size()==1 && d[1]==0){
		cout << 1 <<  endl <<  a[0] << endl;
	}
	else if(n==2){
		if((a[0]+a[1])%2==0){
			cout << 3 << endl;
			cout << a[0]-d[1] << " " << (a[0]+a[1])/2  << " " << a[1]+d[1] << endl;
		}
		else{
			cout << 2 << endl;
			cout << a[0]-d[1] << " " << a[n-1]+d[1] << endl;
		}
	}
	
	else if(diff.size()==1){
		cout << 2 << endl;
		cout << a[0]-d[1] << " " << a[n-1]+d[1] << endl;	
	}
	else if(diff.size()>2){
		cout << 0 << endl;
	}
	else{
		assert(diff.size()==2);
		LL mi = INT_MAX,val;
		for(i=1;i<n;i++)mi=min(mi,d[i]);
		for(i=0;i<n-1;i++){
			if((a[i+1]-a[i])!=mi){
						a[n]=val=a[i]+mi;sort(a,a+n+1);break;
			}
		}
		set <LL> ss;
		for(i=1;i<n+1;i++){
			ss.insert(a[i]-a[i-1]);
		}
		if(ss.size()==1){cout << 1 << endl;cout<<val<<endl;}
		else cout << 0 << endl;
	}
	return 0;
}