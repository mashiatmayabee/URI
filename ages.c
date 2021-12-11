#include<stdio.h>
int main(){
    int x,sum=0,c=0;
    float aa;
    while(1){
        scanf("%d",&x);
        if(x<0){break;}
        sum=sum+x;
        c=c+1;
    }
    aa=1.0*sum/c;
    printf("%0.2f",aa);


}
