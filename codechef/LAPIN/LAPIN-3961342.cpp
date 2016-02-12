#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
int compare(const void *a,const void *b)
{
	return (*(char *)a - *(char *)b);
}
int main()
{
	int T,i,l,j,ARRAY_LENGTH;
	scanf("%d",&T);
	while(T--)
	{
		char str[1001];
		cin >> str;
		l=strlen(str);
		ARRAY_LENGTH = l/2 +1;
		char str1[l/2 +1];
		char str2[l/2 +1];
		memset( str1, '\0', sizeof(char)*ARRAY_LENGTH );
		memset( str2, '\0', sizeof(char)*ARRAY_LENGTH );
		for(i=0;i<l/2;i++)
			str1[i]=str[i];
		if(l%2==0)
		{
			for(i=l/2,j=0;i<l;i++)
			{
				str2[j]=str[i];
				j++;
			}
		}
		else
		{
			for(i=l/2+1,j=0;i<l;i++)
			{
				str2[j]=str[i];
				j++;
			}
		}
		qsort(str1,l/2,sizeof(char),compare);
		qsort(str2,l/2,sizeof(char),compare);
		if(!strcmp(str1,str2))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}