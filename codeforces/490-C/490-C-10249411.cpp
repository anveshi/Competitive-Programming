#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
LL modpow(LL base, LL exp, LL modulus) {
	base %= modulus;
	LL result = 1;
	while (exp > 0) {
		if (exp & 1) result = (result * base) % modulus;
		base = (base * base) % modulus;
		exp >>= 1;
	}
	return result;
}
int main(){
	string s;
	map<int,int>m1,m2;
	m1.clear(),m2.clear();
	LL a,b,i;
	cin >> s >> a >> b;
	LL rem =0LL;
	for(i=0;i<s.length();i++){
		rem = rem*10+(s[i]-'0');
		rem%=a;
		if(rem==0){
			m1[i]=1;
//			cout << "m1 " << i << endl;
		}
	}
	rem = 0LL;
	LL m10=1;
	for(i=s.length()-1;i>=0;i--){
		rem = ((m10*(s[i]-'0'))%b +rem)%b;
		m10=(m10*10)%b;
		if(rem==0&&s[i]!='0'){
			m2[i]=1;
//			cout << "m2 " << i << endl;
		}
	}
	for(i=0;i<s.length()-1;i++){
		if(m1[i] && m2[i+1]){
			cout << "YES\n" << s.substr(0,i+1) << "\n" << s.substr(i+1,s.length()-(i+1)) << "\n";
			return 0;
		}
	}
	cout << "NO\n";

	return 0;
}