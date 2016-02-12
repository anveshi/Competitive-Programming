/*

		Thursday 24th July 2014
		By ++Anveshi Shukla

*/

#include<bits/stdc++.h>
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i=(c).begin() ;i!=c.end();i++)
#define present(c,x) ((c).find(x)!=(c).end())
#define cpresent(c,x) (find(all(c),x)!=(c).end())
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
int main()
{	
	int n,i,start,end,flag=1,x;
	cin >> n;
	vi a(n);
	start=0;end=0;
	for(i=0;i<n;i++){scanf("%d",&a[i]);}
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]>=a[i])continue;
		else {start=i;break;}
	}
	end=start;
	for(i=start;i<n-1;i++)
	{
		if(a[i]>=a[i+1])continue;
		else{break;}
	}
	end=i;
//	cout << start+1  << " " << end+1 << endl;
	if(end<n-1){
	if(a[start]>a[end+1])flag=0;
	}
	if(start>0)
	{
		if(a[end]<a[start-1])flag=0;
	}
	if(flag==1)
	{
	for(i=end;i<n-1;i++)
	{
		if(a[i+1]>=a[i])continue;
		else{flag=0;break;}
	}
	}
	if(flag==1)
	{
		printf("yes\n");
		printf("%d %d\n",start+1,end+1);
	}
	else
	{
		printf("no\n");
	}
	return 0;
}