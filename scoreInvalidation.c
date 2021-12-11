#include<stdio.h>
int main()
{
    int i=0;
    double num,sum=0;
    while(sum<=10)
    {
        scanf("%lf",&num);
        if(num>=0&&num<=10)
        {
            sum=sum+num;
        }
        else
            printf("nota invalida\n");
    }
    printf("media = %0.2lf\n",sum/2);
    return 0;
}
