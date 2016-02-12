//anveshi
#include<bits/stdc++.h>
#define lol long long int
#define ulol unsigned long long int
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
int level(int a)
{
	for(int i=0;i<64;i++)
	{
		if((1<<i)>a)
			return i;
	}
}
using namespace std;
int main()
{
	//ios_base::sync_with_stdio(false); 
	int x,y,temp,q;
	cin.tie(NULL);
	char s[4];
	cin >> q;
	temp=1;
	while(q--)
	{ 
		int b=0,r=0;
		scanf("%s",s);
		if(s[1]=='b')
		{
			cin >> x >>y;
			while(x!=y)
			{
				if(temp)
				{
					if(x>y){if(level(x)%2==1)b++;}
					if(y>x){if(level(y)%2==1)b++;}
				}
				else
				{
					if(x>y){if(level(x)%2==0)b++;}
					if(y>x){if(level(y)%2==0)b++;}

				}
				x>y?x/=2:y/=2;
			}
				if(temp)
				{
					if(level(x)%2==1)b++;
				}
				else
				{
					if(level(x)%2==0)b++;
				}
				cout << b << endl;


		}
		else if(s[1]=='r')
		{
			cin >> x >> y;
			while(x!=y)
			{
				if(temp)
				{
					if(x>y){if(level(x)%2==0)r++;}
					else{if(level(y)%2==0)r++;}
				}
				else
				{
					if(x>y){if(level(x)%2==1)r++;}
					else{if(level(y)%2==1)r++;}

				}	
				x>y?x/=2:y/=2;
			}
				if(temp)
				{
					if(level(x)%2==0)r++;
				}
				else
				{
					if(level(x)%2==1)r++;
				}
				cout << r << endl;
		}
		else if(s[1]=='i')
			temp^=1;	
		
	}
	return 0;
}