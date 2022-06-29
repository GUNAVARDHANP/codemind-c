#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[100],j,i,c=0,d,temp,m,sum=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        temp=arr[i];
        if(arr[i]<0)
        {
            arr[i]=abs(arr[i]);
        }
        if(arr[i]==0)
        {
            c=1;
        }
        while(arr[i]>0)
        {
            d=arr[i]%10;
            c++;
            arr[i]=arr[i]/10;
        }
        if(c==m)
        {
           sum++;
        }
    }
     printf("%d ",sum);
}