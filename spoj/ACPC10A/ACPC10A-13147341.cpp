#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); 
	cin.tie(NULL);
	int t,a1,a2,a3,d1,d2,r;
	while(1){
		cin>>a1>>a2>>a3;
		if(a1==0 && a2==0 && a3==0)break;
		d1=a2-a1;
		d2=a3-a2;
		if(d1==d2){cout<<"AP " << a3+d1 <<endl;}
		else
		{
			r=a2/a1;
			cout<<"GP " << a3*r << endl;
		}
	}

	return 0;
}
