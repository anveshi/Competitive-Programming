#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k,d;
	scanf("%d %d",&k,&d);
	if(d!=0){
	for(int i=0;i<k-1;i++)
		cout << "9";
	cout << d << endl;}
	else{
		if(k==1)cout << 0 << endl;
		else cout << "No solution" << endl;
	}
    return 0;
}