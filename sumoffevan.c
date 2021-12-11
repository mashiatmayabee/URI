#include<stdio.h>
int main()
{
    int a,b,c,d,i,sum,n;
    while(1)
    {
        scanf("%d",&a);
        if(a==0)
            break;
        sum=0;
        if(a%2==0)
    {
                    n=a;

        for(i=1;i<=5;i=i+1)
        {
            sum=sum+n;
            n=n+2;
        }
    }
    else{
            n=a+1;

        for(i=1;i<=5;i=i+1)
        {
            sum=sum+n;
            n=n+2;
        }

    }
    printf("%d\n",sum);
    }
    return 0;
}
