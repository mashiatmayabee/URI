#include<stdio.h>
int main()
{
    int n,m,b,s,i,sum;
    while(1)
    {
        sum=0;
        scanf("%d %d",&m,&n);
        if(m<=0||n<=0){
            break;
        }
        else if(m>n)
        {
            b=m;
            s=n;
        }
        else
        {
            b=n;
            s=m;
        }
        for(i=s;i<=b;i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
    }
}
