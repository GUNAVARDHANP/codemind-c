#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],k=0,i,c,j;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++){
        c=0;
        for(j=i+1;j<n;j++){
            if(a[i]<a[j]){
                c=j-i;
                break;}
        }
        b[k++]=c;
    }
    for(i=0;i<k;i++)
        printf("%d ",b[i]);
}