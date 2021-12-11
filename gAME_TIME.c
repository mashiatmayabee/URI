#include<stdio.h>
int main()
{
    int a,b,t;
    scanf("%d%d",&a,&b);
    t=b-a;
    if(t<0)
    {
        t=24+t;
    }
    if(a==b)
    {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else
    printf("O JOGO DUROU %d HORA(S)\n",t);

    return 0;


}
