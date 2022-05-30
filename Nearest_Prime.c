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
    int m,n,i,j,fp,bp;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&n);
        for(j=n;j<2*n;j++)
        {
            if(prime(j))
            {
                fp=j;
                break;
            }
        }
        for(j=n;j>=2;j--)
        {
            if(prime(j))
            {
                bp=j;
                break;
            }
        }
        if((fp-n)<(n-bp))
        {
            printf("%d
",fp);
        }
        else
        {
            printf("%d
",bp);
        }
    }
}