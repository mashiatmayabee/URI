#include<stdio.h>
int main()
{
    int i,j,n=7;
    for(i=1;i<=9;i=i+2)
    {
        for(j=n;j>=n-2;j=j-1)
        {
            printf("I=%d j=%d\n",i,j);
        }
        n=n+2;
    }
    return 0;
}
