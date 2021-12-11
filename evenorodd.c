#include<stdio.h>
int main(){
    int i,x,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&x);
            if(x>0){
                if(x%2==0){
                    printf("EVEN POSITIVE\n");
                }
                else{
                    printf("ODD POSITIVE\n");
                }
            }
            else if(x<0){
                if(x%2==0)
                {
                  printf("EVEN NEGATIVE\n");
                }
                else{
                    printf("ODD NEGATIVE\n");
                }
            }
            else{
                printf("NULL\n");
            }

    }
    return 0;

}
