#include<bits/stdc++.h>
using namespace std;
int binarysearch(int value,int first,int last,int *a)
{
	while(first <= last)
	{
		int mid;
		if(value==a[first])
			return first;
		else if(value==a[last])
			return last;
		else
		{
			mid=(first+last)/2;
			if (value==a[mid])
				return mid;
			else if(a[mid] > value)
				return binarysearch(value,first,mid-1,a);
			else if(a[mid] < value)
				return binarysearch(value,mid+1,last,a);

			return -1;

		}
	}
	return -1;
}
int main()
{
	set <int> s;
//	vector <int> v;
	int n,k,p,x,flag,x1,x2,i,count,len,p1,p2;
	cin >> n >>k >> p;
	int a[n+1];
	for(i=1;i<=n;i++)
	{
		cin >> x;
		s.insert(x);
		a[i]=x;
	}
	len=s.size();
	int v[len];
	i=0;
	for(auto it=s.begin();it!=s.end();it++)
	{
		v[i]=*it;i++;
	}
//	len=i;
	vector <int> ans(len);
	ans[0]=0;
	count=0;
	for(i=1;i<len;i++)
	{
		if(v[i]-v[i-1] > k)
			count++;
		ans[i]=count;
	}
//	for(i=0;i<len;i++)
//		cout << ans[i] << " " ;return 0;
	while(p--)
	{
		cin >> x1 >> x2;
		x1=a[x1];x2=a[x2];
		p1=binarysearch(x1,0,len,v);
		p2=binarysearch(x2,0,len,v);
//		cout << p1 << " "<< p2 << endl;
		if(ans[p1]-ans[p2] == 0)
			cout << "Yes" << endl;
		else 
			cout << "No" << endl;
	}
return 0;
}