#include<stdio.h>
#include<string.h>
int main()
{
	int i,t,len,count;
	char s[100];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
                len=strlen(s);
		count=0;
		for(i=0;i<len;i++)
		{
			if(s[i]=='A'|| s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='Q'||s[i]=='R')
				count++;
			else if(s[i]=='B')
				count=count+2;
		}
		printf("%d\n",count);
	}
	return 0;
}