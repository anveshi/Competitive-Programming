#include <bits/stdc++.h>
#define LL long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main(){
    string s;
    int n,p,i,j,st,end;
    cin  >> n >> p;
    st = n/2-1;end=0;
    cin >> s;
    p--;
    if(p>=n/2){p=n-p-1;reverse(s.begin(),s.end());}
    for(i=0;i<n/2;i++)if(s[i]==s[n-i-1])continue;else{st=i;break;}
    for(i=n/2-1;i>=0;i--)if(s[i]==s[n-i-1])continue;else {end=i;break;}
//    cout << st << " " << end << endl;
    if(n==1)
    {
	    cout << 0 << endl;return 0;
    }
    if(st>end){
        cout << 0 << endl;
        return 0;
    }
    else if(st==end){
       int  x = abs(s[st]-s[n-1-st]);
        cout << min(x,26-x)+abs(p-st) << endl;
        return 0;
    }
    else {
    	int x=0;
    	for(i=st;i<=end;i++){
			int z = abs(s[i]-s[n-1-i]);
			x+=min(z,26-z);
	}
       	if(p<st || p>end){
		cout << x + max(abs(p-st),abs(p-end)) << endl;
		return 0;
	}
	else{
		int y = min(abs(end-p),abs(st-p));
		y+=abs(end-st);
		cout << y+x << endl;
	}
    }
    return 0;
}