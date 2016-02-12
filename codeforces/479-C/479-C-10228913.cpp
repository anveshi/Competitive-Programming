#include <bits/stdc++.h>
#define LL long long int
#define ff first
#define ss second
using namespace std;
int main(){
	int n;
	pair <int,int> p[100005];
	cin >> n;
	for(int i=0;i<n;i++)cin>>p[i].ff>>p[i].ss;
	sort(p,p+n);
	int mn=-1;
	for(int i=0;i<n;i++){
//		cout << p[i].ff<< p[i].ss << endl;
		if(mn<=p[i].ss)mn=p[i].ss;
		else mn=p[i].ff;
	}
	cout << mn << endl;
	return 0;
}