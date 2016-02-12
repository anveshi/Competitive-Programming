#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int is_subsequence(char *s1,char *s2)
{
	int l1,l2,i,j;
	j=0;
	l1=strlen(s1);
	l2=strlen(s2);
	if(l1 > l2)
		return 0;
	else
	{
		for(i=0;i<l2;i++)
		{
			if(s2[i]==s1[j])
				j++;
			if(j==l1)
				break;
		}
		if(j==l1)
			return 1;
		else
			return 0;
	}
}
int main()
{
	int T,l1,l2,flag;
	scanf("%d",&T);
	while(T--)
	{
		char s1[25001],s2[25001];
		flag=0;
		scanf("%s %s",s1,s2);
		l1=is_subsequence(s1,s2);
		l2=is_subsequence(s2,s1);
		flag = l1 | l2;
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}