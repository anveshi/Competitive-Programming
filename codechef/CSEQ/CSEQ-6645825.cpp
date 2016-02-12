#include <bits/stdc++.h>
#define LL long long int
const LL MOD = 1000003;
LL fact[1000005],ifact[1000005];
using namespace std;
/* This function calculates (a^b)%MOD */
LL pow(LL a, LL b, LL mod) {
LL x = 1LL, y = a;
    while(b > 0) {
        if(b%2 == 1) {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        b /= 2;
    }
    return x;
}
 
LL modInverse(LL a, LL m) {
    return pow(a,m-2,m);
}
//////////////////////////////////////////

LL ncr(LL n,LL r){
	if(n<r)return 0LL;
	LL z;
	z = (fact[n]*ifact[n-r])%MOD;
	z = (z*ifact[r])%MOD;
	return z;
}
LL fun(LL a,LL b){
	LL r1,r2,x1,x2,y1,y2;
	x1=a/MOD;
	y1=b/MOD;
	x2=a%MOD;
	y2=b%MOD;
//	cout << x1 <<  " " << y1 << " " << x2  << " " <<  y2  << endl;
	r1 =ncr(x1,y1);
	r2 =ncr(x2,y2);
//	cout << r1 << " " << r2 << endl;
	return r1*r2;
}
void pre(){
	fact[0]=1;
	fact[1]=1;
	ifact[0]=1;
	ifact[1]=1;
	for(LL i=2;i<1000005;i++){
		fact[i]=(i*(fact[i-1]))%MOD;
		ifact[i]=(modInverse(i,MOD)*ifact[i-1])%MOD;
	}
}
void ppp(){
	int i;
	for(i=0;i<10;i++)cout<<fact[i]<<" ";
	cout << endl;
	for(i=0;i<10;i++)cout<<ifact[i]<<" ";
	cout << endl;
	
}
int main(){
	LL i,j,m,n,z,t,l,r;
	pre();
//	ppp();
	cin >> t;
	while(t--){
//		cin >> n >> r;
//		cout << ncr(n,r) << endl;
		cin >> n >>  l >> r;
//		cout <<  (n+r-l+1) << " "  << n << endl;
		z = fun(n+r-l+1,n) - 1;
		z=(z+4*MOD)%MOD;
		cout << z << endl;
	}
	return 0;
}