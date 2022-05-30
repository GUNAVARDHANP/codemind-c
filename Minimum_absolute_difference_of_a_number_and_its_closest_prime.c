#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0;
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
    int n,i,fp,bp;
    scanf("%d",&n);
    for(i=n;i<=2*n;i++)
    {
        if(prime(i))
        {
            fp=i;
            break;
        }
    }
    for(i=n;i>=2;i--)
    {
        if(prime(i))
        {
            bp=i;
            break;
        }
    }
    if((fp-n)<(n-bp))
    {
        printf("%d",fp-n);
    }
    else
    {
        printf("%d",n-bp);
    }
}