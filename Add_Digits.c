#include<stdio.h>
int solve(int n)
{
    int d,sum=0;
    while(n>0)
    {
        sum=sum+(n%10);
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    while(1)
    {
        if(n<10)
        {
            printf("%d",n);
            break;
        }
        else
        {
            n=solve(n);
        }
    }
}