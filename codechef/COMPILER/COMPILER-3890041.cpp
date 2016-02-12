#include<iostream>
#include<cstdlib>
#include<cstring>
int count,maxwell;
typedef struct node{
	char data;
	struct node *next;
}node;
struct node * top;
using namespace std;
void pop()
{
	count=count+2;
	top=top->next;
	if(top->data =='#' && count >maxwell)
		maxwell=count;

}
struct node *push(char x)
{
	if(top==NULL)
	{
		top=(struct node *)malloc(sizeof(node));
		top->data =x;
		return top;
	}
	else {
	struct node *newnode;
	newnode =(struct node *)malloc(sizeof(node));
	newnode->data =x ;
	newnode->next= top;
	return newnode;
	}
}
int main(void)
{
	int t,l;
	char s[1000001];
	cin >> t;
	while(t--)
	{
	top = NULL;
	top=(struct node *)malloc(sizeof(node));
	top->data='#';
	count = 0;maxwell=0;
	cin >> s;
	l=strlen(s);
	for(int i=0;i<l;i++)
	{
		if(top == NULL && s[i]=='>')
			break;
		else if(s[i] == '<')
			top = push(s[i]);
		else if(s[i] == '>')
		{	if(top->data =='<')
			pop();
			else break;
		}
	}
	cout << maxwell << endl;

	}
	return 0;
}