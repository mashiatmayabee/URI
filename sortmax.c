#include<stdio.h>
int main()
{
    int min=1000,i,a,n,j,m;
    scanf("%d",&n);
    int r[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&r[i]);
    if(r[i]<=min)
        {
            m=i;
            r[i]=min;
        }
    }
    printf("Menor valor: %d\n",min);
    printf("Posicao: %d\n",m);
}
