#include<stdio.h>
int main()
{
    int n,i,j,c,arr[100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
           c++;
        }
    }
    if(c==n)
    {
       printf("True"); 
    }
    else
    {
        printf("False");
    }
}