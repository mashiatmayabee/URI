#include<stdio.h>
int main(){
    int n,x,sin=0,i,sout=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
        if(x>=10&&x<=20){
            sin=sin+1;
        }
        else{
            sout=sout+1;
        }
    }
    printf("%d in\n%d out\n",sin,sout);

}
