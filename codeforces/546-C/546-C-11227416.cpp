#include <bits/stdc++.h>
using namespace std;
#define pb push_back
const int Max = 1234567;
int main(){
	int n,a;
	deque <int> f,s;
	cin >> n;
	cin >> n;
	while(n--){
		cin >> a;f.pb(a);
	}
	cin >> n;
	while(n--){
		cin >> a;s.pb(a);
	}
	int ans=0;
	while(ans<Max && !f.empty() && !s.empty()){
		ans++;
		if(f.front()>s.front()){
			f.pb(s.front());
			f.pb(f.front());
		}
		else{
			s.pb(f.front());
			s.pb(s.front());
		}
			s.pop_front();f.pop_front();
	}
	if(ans<Max){
		cout << ans << " ";
		if(s.empty())
			cout << 1 << endl;
		else cout << 2 << endl;
	}
	else
	cout << -1 << endl;

	return 0;
}