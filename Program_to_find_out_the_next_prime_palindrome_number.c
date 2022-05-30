#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int c=0,i;
    if(n==0 || n==1)
    {
        return 0;
    }
    else if(n==2)
    {
        return 1;
    }
    else
    {
        for(i=2;i<=pow(n,0.5);i++)
        {
            if(n%i==0)
            {
                c+=1;
            }
        }
        if(c==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int pali(int n)
{
    int rev=0,temp;
    temp=n;
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
    int n,i;
    scanf("%d",&n);
    for(i=n+1;i<=20*n;i++)
    {
        if(prime(i) && pali(i))
        {
            printf("%d",i);
            break;
        }
    }
}