#include<stdio.h>
int main()
{
    int i,j,c=0,d=0;
    char str[100];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        c=0;
        for(j=0;str[j]!=NULL;j++)
        {
            if(str[i]==str[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            d+=1;
            printf("%d",i);
            break;
        }
    }
    if(d==0)
    {
        printf("%d",-1);
    }
}