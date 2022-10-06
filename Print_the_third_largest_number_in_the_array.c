#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int n1=0;
    for(i=0;i<n;i++){
        if(a[i]>n1)
            n1=a[i];
    }
    int n2=0;
    for(i=0;i<n;i++){
        if(a[i]!=n1 && a[i]>n2)
            n2=a[i];
    }
    int n3=-1;
    for(i=0;i<n;i++){
        if(a[i]!=n1 && a[i]!=n2 && a[i]>n3)
            n3=a[i];
    }
    if(n3==-1)
        printf("It is not possible");
    else
        printf("%d",n3);
}