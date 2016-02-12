#include <bits/stdc++.h>
using namespace std;
#define pb push_back
int main(){
	long long a,b,c,d,i,temp,a1,a2,nr,dr=0;
	double ans=0.0;
	cin >> a >> b >> c >> d;
	if(a==0 && b==0 && c==0 && d==0){cout << fixed << setprecision(17) << ans  << endl;return 0;}
	nr = fabs(a*d - b*c);
	for(i=0;i<(1<<4);i++){
		temp=0;
		a1=0,a2=0;
		if(i&(1<<0))a1^=1;
		if(i&(1<<3))a1^=1;
		if(i&(1<<1))a2^=1;
		if(i&(1<<2))a2^=1;
		if(a1!=a2)continue;

		if(i&(1<<0))temp+=a;else temp-=a;
		if(i&(1<<1))temp+=b;else temp-=b;
		if(i&(1<<2))temp+=c;else temp-=c;
		if(i&(1<<3))temp+=d;else temp-=d;// dr = z1*a + z2+b +z3*c +z4*d ,zi=+1/-1 && z1*z4 = z2*z3 
						 // only 8 possible values for dr;
		temp = fabs(temp);
		dr = max(dr,temp);
	}
	ans = 0;
	//if(dr!=0)
		ans  = nr/(double)dr;
	cout << fixed << setprecision(17) <<  ans << "\n";
	return 0;
}