#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int 
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
using namespace std;
const lol lol_max=numeric_limits<lol>::max();
int main(){
	string s,str1,str2;char c;
	cin >> s;
	int n = s.length();
	string v ="abcdefghijklmnopqrstuvwxyz";
	int f=0;
	for(int i=0;i<=n;i++)
	{
		string str="";
		for(int j=0;j<26;j++)
		{
			c=v[j];
			str1 = s.substr(0,max(0,i));
			str2 = s.substr(min(i,n),n);
			str1=str1+c+str2;
			//cout << str1 << endl;
			str2=str1;
			reverse(str1.begin(),str1.end());
			if(str1==str2){
				f=1;
				cout << str1 << endl;
				return 0;
			}
		}
		if(f==1)break;
	}
	if(f==0)
		cout<<"NA" << endl;
	return 0;
}