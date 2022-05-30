#include<stdio.h>
int self(int n)
{
    int temp,d=0,pd=0,di;
    temp=n;
    while(temp>0)
    {
        di=temp%10;
        if(di==0)
        {
            return 0;
        }
        else
        {
            if(n%di==0)
            {
                d+=1;
            }
        }
        pd+=1;
        temp=temp/10;
    }
    if(d==pd)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(self(i))
        {
            printf("%d ",i);
        }
    }
}