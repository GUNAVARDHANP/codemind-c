#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,c=0,n;
    char str[100];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        c=0;
        scanf("%s",str);
        for(i=0;str[i]!=NULL;i++)
        {
            if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
            {
                c+=1;
            }
        }
        if(c==strlen(str))
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}