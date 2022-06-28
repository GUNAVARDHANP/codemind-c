#include<stdio.h>
int main()
{
    int n,m,j,i,arr[100][100],s1=0,s2=0;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==j)
            {
                s1+=arr[i][j];
            }
            else if(j==n-i-1)
            {
                s2+=arr[i][j];
            }
        }
    }
    printf("%d",s1+s2);
    
}