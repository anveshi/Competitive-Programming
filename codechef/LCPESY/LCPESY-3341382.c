#include<stdio.h>
#include<string.h>
int min(int a,int b)
{
	if(a<=b)
		return a;
	else 
		return b;
}
int main()
{
	int t,i,j,l1,l2,count;
	char a[10001],b[10001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		scanf("%s",b);
		l1=strlen(a);l2=strlen(b);
		int s11[26]={0},s12[26]={0},s21[26]={0},s22[26]={0},s13[10]={0},s23[10]={0};
		for(i=0;i<l1;i++)
		{
			if(a[i]>='a' && a[i]<='z')s11[a[i]-'a']++;
			else if(a[i]>='A' && a[i]<='Z')s12[a[i]-'A']++; 
			else if(a[i]>='0' && a[i]<='9')s13[a[i]-'0']++;
		}
		for(i=0;i<l2;i++)
		{
			if(b[i]>='a' && b[i]<='z')s21[b[i]-'a']++;
			else if(b[i]>='A' && b[i]<='Z')s22[b[i]-'A']++; 
			else if(b[i]>='0' && b[i]<='9')s23[b[i]-'0']++;
		}
		count=0;
		for(i=0;i<26;i++)
		{
			count+=min(s11[i],s21[i]);
			count+=min(s12[i],s22[i]);
			if(i<10)
				count+=min(s13[i],s23[i]);
		}
		printf("%d\n",count);
	}
	return 0;
}