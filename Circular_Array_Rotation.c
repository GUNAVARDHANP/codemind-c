#include<stdio.h>
void rotation(int *a,int n){
    int i,ans=a[n-1];
    for(i=n-1;i>0;i--)
        a[i]=a[i-1];
    a[0]=ans;
}
int main(){
    int n,k,m;
    scanf("%d%d%d",&n,&k,&m);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<k;i++)
        rotation(a,n);
    for(i=0;i<m;i++){
        int b;
        scanf("%d",&b);
        printf("%d
",a[b]);
    }
}