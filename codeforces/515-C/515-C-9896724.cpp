#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
const LL LL_max=numeric_limits<LL>::max();
int cnt[10];
int x[]={2,3,5,7};
int p[10];
string s;
int main(){
//	x[0]=2,x[1]=3,x[2]=5,x[3]=7;
	p[2]=1,p[3]=1,p[5]=1,p[7]=1;
	int n,i,j,t,temp,k;
	cin >> n;
	cin >> s;
	for(i=0;i<n;i++){
		t=s[i]-'0';
		if(t<2)continue;
		for(j=2;j<=t;j++){
			temp=j;
			for(k=0;k<4;k++){
				while(temp>1){
					if(temp%x[k]==0){
					cnt[x[k]]++;
					temp/=x[k];
					}
					else break;
				}
			}
		}
	}
//	for(i=0;i<=9;i++)cout << cnt[i] <<  " " ;
	vector <int> v;
	v.clear();
	for(i=9;i>=2;i--){
		if(cnt[i]==0)continue;
		else{
			temp=cnt[i];
			for(j=0;j<temp;j++)v.pb(i);
			for(j=i;j>=2;j--){
				int tt=j;
				for(k=0;k<4;k++){
					while(tt>1){
						if(tt%x[k]==0){
							cnt[x[k]]=cnt[x[k]]-temp;
							tt/=x[k];
						}
						else
							break;
					}
				}
			}
		}
	}
	int sz=v.size();
	sort(v.rbegin(),v.rend());
	for(i=0;i<sz;i++)cout<<v[i];
	cout<<endl;

	return 0;
}