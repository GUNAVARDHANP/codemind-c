#include<stdio.h>
int main()
{
    int i,k=0;
    char str[100],res[100];
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='.')
        {
            res[k]='[';
            k++;
            res[k]='.';
            k++;
            res[k]=']';
            k++;
        }
        else
        {
            res[k]=str[i];
            k++;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%c",res[i]);
    }
}