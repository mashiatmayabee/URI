#include<stdio.h>
int main()
{
    int n,a,b,m,sum=0,i;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        n=b;
        m=a;
    }
    else
    {
        n=a;
        m=b;
    }
    for(i=n+1;i<m;i=i+1)
    {
        if(i%2==1||i%2==-1)
        {
            sum=sum+i;
        }
    }
    printf("%d\n",sum);
    return 0;
}
