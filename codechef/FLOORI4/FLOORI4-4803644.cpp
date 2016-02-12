#include<bits/stdc++.h>
#define ull  long long int
#define pb push_back
#define mp make_pair
using namespace std;
ull t,n,m;
vector < pair<ull,ull> > point;
set <ull> v;
ull fun1(ull x)
{
	//sigma x^4 %m
	ull z1,z2,z3,z4,zz,a1,a2,temp,ans1,ans2,ans;
	z1=x;
	z2=x+1;
	z3=2*x+1;
	z4=((((3*x)%m)*x)%m+(3*x)%m-1)%m;
//	cout << z1 << " " << z2<< " "<< z3 << endl;
	if(z1%2==0)z1/=2;
	else if(z2%2==0)z2/=2;
	else if(z3%2==0)z3/=2;

	if(z1%3==0)z1/=3;
	else if(z2%3==0)z2/=3;
	else if(z3%3==0)z3/=3;

	if(z1%5==0)z1/=5;
	else if(z2%5==0)z2/=5;
	else if(z3%5==0)z3/=5;

	else if(x%5==1)
	{
		zz=(x-1)/5;
		temp=zz%m;
		a1=(((15*temp))*(temp))%m;
		a2=(9*zz+1)%m;
		z4=(a1+a2)%m;
	}
	else if(x%5==3)
	{
		zz=(x-3)/5;
		temp=zz%m;
		a1=(((15*temp))*(temp))%m;
		a2=(21*zz+7)%m;
		z4=(a1+a2)%m;
	}
//	cout << z1 << " " << z2<< " "<< z3 << " " << z4 << endl;
	z1%=m;z2%=m;z3%=m;
	z4%=m;
	ans1=(z1*z2)%m;
	ans2=(z3*z4)%m;
	ans=(ans1*ans2)%m;
//	cout << "fun " << x  <<  " " <<  ans << endl;
	return ans;
}
ull fun(ull x)
{
	ull last,start,multi,xx,yy;
	long long int ppp;
	///(( sigma last^4 - sigma first ^4 )*multi )%m;
	last=point[x].first;
	start=point[x-1].first;
	multi=point[x].second;
	xx=fun1(last);
	yy=fun1(start);
	ppp=(xx-yy);
	ppp%=m;
	if(ppp< 0)ppp+=m;
	ppp=(ppp*multi)%m;
//	assert(ppp>=0);
	return ppp;
}
int main()
{
	ull i,j,k,sz,z,squareroot,answer,p,haha,backit;
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> t;
	while(t--)
	{
		v.clear();
		point.clear();
		cin >> n >> m;
		squareroot=sqrt(n);
	/*	for(i=1;i<=squareroot;i++)
		{
			v.insert(i);
			v.insert(n/i);
		}
		sz=v.size();
		for(set <ull> :: iterator it=v.begin();it!=v.end();it++)
		{
			z = *it;
			point.pb(mp(z,n/z));		
		}*/
		for(i=1;i<=squareroot;i++)
		{
			point.pb(mp(i,n/i));
		}
		if(squareroot*squareroot==n)
		{
			backit=squareroot-2;
		}
		else backit=squareroot-1;
		while(backit>=0)
		{
			if(point[backit].first!=point[backit].second)
			point.pb(mp(point[backit].second,point[backit].first));
					backit--;
		}

		sz=point.size();
/*		for(i=0;i<sz;i++)
		{
			cout << point[i].first << " " << point[i].second << endl;
		}*/
		answer=0;
		for(i=0;i<sz;i++)
		{
			if(point[i].first<=squareroot)
			{
				p=i+1;
				haha=(p*p)%m;
				answer+=(((haha)*(haha)*(point[i].second)))%m;
			}
			else
			{

				answer=answer+(fun(i));
			//	assert(answer >=0);
			}
		//	cout <<"  ans =  " << answer << endl;
			answer%=m;
		}
//		assert(answer >=0);

		cout << answer << endl;
	}
	return 0;
}