#include <bits/stdc++.h>
using namespace std;
int a[][3] = {
	{1,2,4},
	{1,3,4},
	{0,3,4},
	{0,2,4},
	{0,2,5},
	{0,3,5},
	{1,2,5},
	{1,3,5}
};
int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	vector <string> v(6,"");
	int T,N=6,flag=0;
	cin >> T;
	while(T--){
		flag = 0;
		for(int i=0;i<6;i++){
			cin >> v[i];
		}
		for(int i=0;i<8;i++){
			if(v[a[i][0]] == v[a[i][1]] && v[a[i][0]] == v[a[i][2]]){
				flag = 1;
				break;
			}
		}
		if(flag)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}