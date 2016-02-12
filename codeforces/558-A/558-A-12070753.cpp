#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
LL n,sum,x,y,ans;
vector <pair <LL,LL> > p1,p2;
int main(){
	cin >> n;
	while(n--){
		cin >> x >> y;
		if(x>0){
			p1.push_back(make_pair(x,y));
		}
		else if(x<0){
			p2.push_back(make_pair(x,y));
		}
		else ans += y;
	}	
	LL sz1 = p1.size(),sz2 = p2.size();
	sort(p1.begin(), p1.end());
	sort(p2.rbegin(),p2.rend());
	LL M = min(sz1,sz2);
	for(int i=0;i<M;i++){
		ans +=p1[i].second;
		ans +=p2[i].second;
	}
	if(sz1<sz2){
		ans += p2[M].second;
	}
	else if(sz2<sz1){
		ans += p1[M].second;
	}
	cout << ans << endl;
	return  0;
}