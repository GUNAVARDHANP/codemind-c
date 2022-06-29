#include<stdio.h>
int main()
{
    int n,arr[100],i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
       int c=0,brr[100],k=0,max=0,min=1000;
       float d=0;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                sum++;
            }
        }
        if(sum==arr[i])
        {
           // printf("%d ",arr[i]);
            brr[k]=arr[i];
            arr[i]=0;
            k++;
            //printf("%d",c);
        }
    }
    if(k==0)
    {
        printf("-1");
    }
    else
    {
        for(i=0;i<k;i++)
        {
            d=d+brr[i];
        }
        float avg=d/k;
        printf("%.2f",avg);
    }
}