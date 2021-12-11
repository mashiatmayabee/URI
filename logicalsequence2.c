#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d %d",&a,&b);
    for(i=1;i<=b;i=i+1)
    {
        if((i/a)==0){
printf("\n");
        }
        else
        {
            printf("%d",i);
        }


    }
}
