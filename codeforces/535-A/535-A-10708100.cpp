#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
const LL MOD = 1000000007;
using namespace std;
vector <string> a;
vector <string> b;
int main(){
	//ios_base::sync_with_stdio(false); 	
	//cin.tie(NULL);
	LL i,j,t,m,n,x,y,sz,ans=0LL;
	a.pb("zero");
	a.pb("one");
	a.pb("two");
	a.pb("three");
	a.pb("four");
	a.pb("five");
	a.pb("six");
	a.pb("seven");
	a.pb("eight");
	a.pb("nine");
	a.pb("ten");
	a.pb("eleven");
	a.pb("twelve");
	a.pb("thirteen");
	a.pb("fourteen");
	a.pb("fifteen");
	a.pb("sixteen");
	a.pb("seventeen");
	a.pb("eighteen ");
	a.pb("nineteen");
	a.pb("twenty");
	
	b.pb("x");
	b.pb("xx");
	b.pb("twenty");
	b.pb("thirty");
	b.pb("forty");
	b.pb("fifty");
	b.pb("sixty");
	b.pb("seventy");
	b.pb("eighty");
	b.pb("ninety");
	b.pb("xx");

	cin>>n;
	if(n<=20)
		cout << a[n];
	else{
		cout << b[n/10];
		if(n%10!=0){
			cout << "-";
			cout << a[n%10];
		}
	}
	cout << endl;

	return 0;
}