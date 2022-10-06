#include<stdio.h>
int main(){
    int a,g;
    scanf("%d",&a);
    for(g=0;g<a;g++){
        int n;
        scanf("%d",&n);
        int a[n],i,j,c=0,d;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        if(a[0]>a[1])
            c+=1;
        if(a[n-1]>a[n-2])
            c+=1;
        for(i=1;i<n-1;i++){
            d=0;
            if(a[i]>a[i+1]){
                d=1;
                for(j=0;j<i;j++){
                    if(a[j]>a[i]){
                        d=0;
                        break;
                    }
                }
            }
            if(d==1)
                c+=1;
        }
        printf("Case #%d: %d
",g+1,c);
    }
}