#include<stdio.h>
int main()
{
	int h,m;
	char c,d;
	scanf("%d:%d %c%c",&h,&m,&c,&d);
	if(h!=0 && h<=12)
	{
	    if(c=='A' && h==12)
	    {
		    h=12-h;
	    }
	    else if(c=='P' && h!=12)
	    {
		    h=12+h;
	    }
	
	    if(h<=9 && m<=9)
	    {
		    printf("0%d:0%d",h,m);
	    }
	    else if(h<=9)
	    {
		    printf("0%d:%d",h,m);
	    }
	    else if(m<=9)
	    {
		    printf("%d:0%d",h,m);
	    }
	    else
	    {
		    printf("%d:%d",h,m);
	    }
	}
}