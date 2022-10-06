#include<stdio.h>
int mini(int *a,int n){
    int i,min;
    for(i=0;i<n;i++){
        if(a[i]>0){
            min=a[i];
            break;
        }
    }
    for(i=0;i<n;i++){
        if(a[i]>0 && a[i]<min)
            min=a[i];
    }
    return min;
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n],i,c=n,min;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(c>0){
        printf("%d
",c);
        c=0;
        min=mini(a,n);
        for(i=0;i<n;i++){
            a[i]=a[i]-min;
            if(a[i]>0)
                c+=1;
        }
    }
}