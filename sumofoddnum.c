#include<stdio.h>
int main(){
    int sum=0,i,n,x,y,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d%d",&x,&y);
        if(x%2==0){
            for(j=x+1;j=x+(2*y);j=j+2){
                sum=sum+j;
            }
        }
        else{
            for(j=x;j=x+(2*y);j=j+2){
                sum=sum+j;

        }
          }
  printf("%d\n",sum);
    }
    return 0;
}
