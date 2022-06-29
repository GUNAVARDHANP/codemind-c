#include<stdio.h>
int main()
{
    int i,n,sum=0,a,b,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&a,&b);
    int x,y=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>=a && arr[i]<=b)
        {
           printf("%d ",arr[i]);
        }
        else
        {
            y++;
        }
    }
    if(y==n)
    {
        printf("-1");
    }
   // printf("%d",sum);
   
}