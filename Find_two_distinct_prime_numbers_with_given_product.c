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
        for(i=2;i<pow(n,0.5);i++)
        {
            if(n%i==0)
            {
                c+=1;
                break;
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
    int n,i,j,c=0;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
            if(prime(i) && prime(j))
            {
                if(i*j==n && i<j)
                {
                    c+=1;
                    printf("%d %d",i,j);
                    break;
                }
            }
        }
    }
    if(c==0)
    {
        printf("%d",-1);
    }
}