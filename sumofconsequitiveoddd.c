#include<stdio.h>
int main()
{
    int p,a,b,sum=0,i,f,n;
    scanf("%d",&f);
    for(p=1;p<=f;p=p+1){
    scanf("%d%d",&a,&b);
    sum=0;
    if(a%2==0)
    {
                    n=a+1;

        for(i=1;i<=b;i=i+1)
        {
            sum=sum+n;
            n=n+2;
        }
    }
    else{
            n=a;

        for(i=1;i<=b;i=i+1)
        {
            sum=sum+n;
            n=n+2;
        }

    }
    printf("%d\n",sum);
}
return 0;
}
