#include<stdio.h>
int pali(int n)
{
    int rev=0,temp=n;
    while(temp>0)
    {
        rev=rev*10+(temp%10);
        temp=temp/10;
    }
    if(rev==n)
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
    int n,i,fp,bp;
    scanf("%d",&n);
    for(i=n+1;i<=2*n;i++)
    {
        if(pali(i))
        {
            fp=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(pali(i))
        {
            bp=i;
            break;
        }
    }
    if((fp-n)<(n-bp))
    {
        printf("%d",fp);
    }
    else if((n-bp)<(fp-n))
    {
        printf("%d",bp);
    }
    else
    {
        printf("%d %d",bp,fp);
    }
}