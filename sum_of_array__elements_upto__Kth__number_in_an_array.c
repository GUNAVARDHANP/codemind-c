#include<stdio.h>
int main()
{
    int n,i,arr[100],sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
}