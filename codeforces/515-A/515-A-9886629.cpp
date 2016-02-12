#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
LL ffabs(LL x){
	return (x<0?-x:x);
}
const LL LL_max=numeric_limits<LL>::max();
int main(){
	LL a,b,s;
	cin >> a >> b >> s;
	a = ffabs(a);b=ffabs(b);
	if(s<a+b){
		cout << "No" << endl;
	}
	else{
		s = s-a-b;
		if(s%2==0)
			cout << "Yes" << endl;
		else cout <<  "No" << endl;
	}
	return 0;
}