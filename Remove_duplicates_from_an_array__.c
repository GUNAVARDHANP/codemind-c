#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n],b[n],k=0,i,j,c=1;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        c=1;
        for(j=0;j<k;j++){
            if(a[i]==b[j]){
                c=0;
                break;
            }
        }
        if(c==1)
            b[k++]=a[i];
    }
    for(i=0;i<k;i++)
        printf("%d ",b[i]);
}