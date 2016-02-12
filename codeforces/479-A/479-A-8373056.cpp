#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned lol
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int a,b,c;
	cin >> a >> b >> c;
	int arr[6]={a*b*c,a+b+c,a*(b+c),(a+b)*c,a*b+c,a+b*c};
	sort(arr,arr+6);
	cout << arr[5] << endl;
	return 0;
}