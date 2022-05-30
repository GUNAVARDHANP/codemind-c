#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int c=0,i;
    if(n==0 || n==1)
    {
        return 0;
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
int main()
{
    int n,m,sum,sum1;
    scanf("%d%d",&n,&m);
    sum=n+m;
    sum1=sum+1;
    while(1)
    {
        if(prime(sum1))
        {
            printf("%d",sum1-sum);
            break;
        }
        else
        {
            sum1=sum1+1;
        }
    }
}