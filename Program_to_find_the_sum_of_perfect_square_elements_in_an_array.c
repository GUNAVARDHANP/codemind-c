#include<stdio.h>
#include<math.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        float f=pow(a[i],0.5);
        int j=f;
        if(j==f){
            sum+=a[i];
        }
    }
    printf("%d",sum);
}