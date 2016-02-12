#include <bits/stdc++.h>
using namespace std;
const int Maxn = 1000001;
int n,a[Maxn],s[Maxn],e[Maxn],l=0,r=0,f=0,x;

int main(){
	cin >> n;
	for(int i=1;i<=n;i++){
		cin >> x;
		if(a[x]==0)s[x]=i;
		a[x]++;
		e[x] = i;
	}
	for(int i=1;i<Maxn;i++){
		if(a[i]>f){
			f = a[i];
			l = s[i];
			r = e[i];
		}
		else if(a[i]==f){
			if(e[i]-s[i]<r-l){
				l = s[i];
				r = e[i];				
			}
		}
	}
	cout << l << " "  << r << endl;
	return 0;
}