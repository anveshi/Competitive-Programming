#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
LL a[2345][2345];
const LL off = 3000LL;
LL mm1[3*off],mm2[3*off];
LL n;
LL cp(LL i,LL j){
	LL ret=0LL;
	while(i<n && j<n){
		ret +=a[i][j];
		i++,j++;
	}
	return ret;
}
LL sc(LL i,LL j){
	LL ret = 0LL;
	while(i>=0 && j<n){
		ret +=a[i][j];
		i--;j++;
	}
	return ret;
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	LL i,j;
	cin >> n;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cin >> a[i][j];
		}
	}
	pair <LL,LL> op,ep;
//	map <LL,LL> primary_diagonal,secondry_diagonal;
//	primary_diagonal.clear(),secondry_diagonal.clear();
	for(i=0;i<n;i++){
		 mm1[i-0+off]=cp(i,0);
		 mm1[0-i+off]=cp(0,i);
		 mm2[i+0+off]=sc(i,0);
		 mm2[n-1+i+off]=sc(n-1,i);
	}
	LL emaxx =0LL;LL omaxx=0LL;
	op=mp(1,2);ep=mp(1,1);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if((i+j)%2==0){
				//LL x=primary_diagonal[i-j]+secondry_diagonal[i+j]-a[i][j];
				LL  x = mm1[i-j+off]+mm2[i+j+off]-a[i][j];
				if(x>emaxx){emaxx=x;ep=mp(i+1,j+1);}
			}
			else{
				//LL x=primary_diagonal[i-j]+secondry_diagonal[i+j]-a[i][j];
				LL x = mm1[i-j+off]+mm2[i+j+off]-a[i][j];
				if(x>omaxx){omaxx=x;op=mp(i+1,j+1);}
			}
		}
	}
	cout << omaxx + emaxx << "\n";
	cout << ep.ff << " " << ep.ss << " " << op.ff <<  " " << op.ss << "\n";
	return 0;
}