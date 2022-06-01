#include<stdio.h>
int main()
{
    int i,c=0,n,j;
    char str[100];
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%s",str);
        c=0;
        for(i=0;str[i]!=NULL;i++)
        {
            if(str[i]=='0'||str[i]=='1'||str[i]=='2'||str[i]=='3'||str[i]=='4'||str[i]=='5'||str[i]=='6'||str[i]=='7'||str[i]=='8'||str[i]=='9')
            {
                c+=1;
                break;
            }
        }
        if(c==1)
        {
            printf("Yes
");
        }
        else
        {
            printf("No
");
        }
    }
}