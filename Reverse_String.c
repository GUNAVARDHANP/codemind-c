#include<stdio.h>
#include<string.h>
int main()
{
    long int i,j,k=0;
    char str[100],res[100];
    scanf("%[^
]s",str);
    for(i=(strlen(str)-1);i>=0;i--)
    {
        if(str[i]==' ')
        {
            for(j=i+1;str[j]!=NULL;j++)
            {
                if(str[j]!=' ')
                {
                    res[k]=str[j];
                    k++;
                }
                else
                {
                    break;
                }
            }
            res[k]=' ';
            k++;
        }
    }
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]!=' ')
        {
            res[k]=str[i];
            k++;
        }
        else
        {
            break;
        }
    }
    for(i=0;i<k;i++)
    {
        printf("%c",res[i]);
    }
}