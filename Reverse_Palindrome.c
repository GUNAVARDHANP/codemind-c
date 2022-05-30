#include<stdio.h>
int solve(int n)
{
    int rev=0,temp;
    temp=n;
    while(temp>0)
    {
        rev=rev*10+(temp%10);
        temp=temp/10;
    }
    return rev;
}
int pali(int n)
{
    if (solve(n)==n)
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
    int n,res;
    scanf("%d",&n);
    n=n+solve(n);
    while(1)
    {
        if (pali(n))
        {
            printf("%d",n);
            break;
        }
        else
        {
            n=n+solve(n);
        }
    }
}