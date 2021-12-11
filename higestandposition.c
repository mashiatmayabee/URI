
#include<stdio.h>
int main(){
    int x[100],max=0,i,m;
    for(i=0;i<100;i=i+1){
        scanf("%d",&x[i]);

        if(x[i]>max){
            max=x[i];
            m=i+1;
        }
    }
    printf("%d\n%d\n",max,m);
    return 0;
}
