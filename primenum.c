#include<stdio.h>
int main(){
    int n,x,i,j,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
        scanf("%d",&x);
        for(j=2;j<x;j=j+1){
            if(x%j==0){
                count=count+1;
            }
        }
        if(count==0){
            printf("%d eh primo\n",x);
        }
        else{
            printf("%d nao eh primo\n",x);
        }
    }
    return 0;
}
