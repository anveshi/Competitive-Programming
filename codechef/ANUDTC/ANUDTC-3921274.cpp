#include<iostream>
#include<cstdio>
using namespace std;
bool f1(int x)
{
	if(360%x ==0)
		return true;
	return false;
}
bool f2(int x)
{
	if(x>=1 && x<=360)
		return true;
	return false;
}
bool f3(int x)
{
	if(x>=1 && x<27)
		return true;
	return false;

}
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n,ans1,ans2,ans3;
		cin >> n;
		ans1 = f1(n);
		ans2 = f2(n); 
		ans3 = f3(n);
		if(ans1)
			cout <<"y ";
		else 
			cout <<"n ";
		if(ans2)
			cout <<"y ";
		else 
			cout << "n ";
		if(ans3)
			cout << "y"<<endl;
		else 
			cout << "n"<<endl;

	}
	return 0;
}