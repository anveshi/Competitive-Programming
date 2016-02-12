#include <bits/stdc++.h>
#define LL long long int
const LL MOD = 1000000007;
using namespace std;
int main(){
	LL i,j,m,n;
	vector <LL> v;v.clear();LL a[12];a[0]=1;for(i=1;i<12;i++)a[i]=a[i-1]*10;
	for(i=1;i<=(1LL<<10);i++){
		LL val=0;
		for(j=0;j<=10;j++){
			if(i&(1LL<<j)){
				val+=a[j];
			}
		}
		v.push_back(val);
	}
	sort(v.begin(),v.end());
	cin  >> n;
	LL anss=0LL;
	for(i=0;i<v.size();i++){
		if(v[i]<=n)anss++;
		else break;
	}
	cout << anss << endl;
	return 0;
}