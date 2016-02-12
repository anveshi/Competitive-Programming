#include<bits/stdc++.h>
using namespace std;
int main(){
	vector <long long> a(3,0);
	cin >> a[0] >> a[1] >> a[2];
	sort(a.begin(),a.end());
	if(a[2]>=2*(a[1]+a[0]))
		cout << a[0]+a[1] << "\n";
	else 
		cout << (a[0]+a[1]+a[2])/3 << endl;

	return 0;
}