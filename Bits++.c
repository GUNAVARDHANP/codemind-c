#include<stdio.h>
int main()
{
	int n,i,x=0;
	char str[100];
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s",str);
		for(i=0;str[i]!=NULL;i++)
		{
			if(str[i]=='+')
			{
				x+=1;
			}
			else if(str[i]=='-')
			{
				x-=1;
			}
		}
	}
	printf("%d",x/2);
}