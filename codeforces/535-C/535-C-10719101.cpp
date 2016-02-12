#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
LL t,m,a,b,l;
using namespace std;
LL bin(LL x1,LL y1){
	if(x1>y1)swap(x1,y1);
	//cout << x1 << " " << y1 << endl;
	LL mid = (x1+y1)/2,no,no1;
	if(y1-x1<=1){
		LL sum1 = (x1-l+1)*(a+(x1-1)*b+a+(l-1)*b);
		LL sum2 = (x1-l+2)*(a+(x1)*b+a+(l-1)*b);
		LL sum3 = (y1-l+1)*(a+(y1-1)*b+a+(l-1)*b);
		LL sum4 = (y1-l+2)*(a+(y1)*b+a+(l-1)*b);
		LL zz = 2*t*m;
	//	cout << sum1 << " " << sum2 << " " << zz << endl;
		if(sum1<=zz && sum2>zz)return x1;
		if(sum3<=zz && sum4>zz)return y1;
	}
	no = mid-l+1;
	LL sum = (no)*(a+(mid-1)*b+a+(l-1)*b);
	if(sum<2*t*m)
		return bin(mid+1,y1);
	else if(sum==2*t*m)
		return mid;
	else
		return bin(x1,mid-1);
}
int main(){
	ios_base::sync_with_stdio(false); 	
	cin.tie(NULL);
	LL i,j,n,x,y,r,r1;
	cin >> a >> b >> n;
	while(n--){
		cin >> l >> t  >> m;
		x = a+(l-1)*b;
		if(x>t){
			r  = -1;
		}
		else{
			r = ((t-a)/b) + 1;
			LL x1,y1;x1=l,y1=r;
		//	cout << r << endl;
			if(
			(r-l+1)*(a+(r-1)*b+a+(l-1)*b) <= 2*t*m)r1=r;
			else r1 = bin(x1,y1);
			r =min(r,r1);	
		}
		cout << r << endl;
	}
	return 0;
}