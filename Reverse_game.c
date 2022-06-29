#include<stdio.h>
int main()
{
    int n,m,arr[100],sum=0,i,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=0;
       int temp=arr[i];
        while(temp>0)
        {
            d=temp%10;
            sum=sum*10+d;
            temp/=10;
        }
        printf("%d ",sum);
    }
}