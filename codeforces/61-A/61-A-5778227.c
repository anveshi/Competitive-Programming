#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,k;
	char s1[110],s2[110];
	scanf("%s %s",s1,s2);
	len=strlen(s1);
	for(i=0;i<len;i++)
	{
		k=(s1[i]-'0')^(s2[i]-'0');
		printf("%d",k);
	}
	printf("\n");
	return 0;
}