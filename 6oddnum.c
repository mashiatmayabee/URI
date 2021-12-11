#include<stdio.h>
int main(){
    int x,y,i,sum=0;
    scanf("%d%d",&x,&y);
   if(x<y){
   for(i=x;i<=y;x++){
    if(i%2!=0){
        sum=sum+i;
printf("%d\n",sum);
    }
   }
   if(x>y){
   for(i=y;i<=x;y++){
    if(i%2!=0){
        sum=sum+i;
printf("%d\n",sum);
    }

}
}}
return 0;
   }















    /*if(x<y){
    if(x%2==0){
        for(i=x+1;i<=y;i=i+2){
            sum=sum+i;
        }
    }
    else{
        for(i=x;i<=y;i=i+2)
            sum=sum+i;

    }
    }
    else{
    if(y%2==0){
        for(i=y+1;i<=x;i=i+2){
            sum=sum+i;
        }
    }
    else{
        for(i=y;i<=x;i=i+2)
            sum=sum+i;

    }
    }
    printf("%d\n",sum);



return 0;
}*/
