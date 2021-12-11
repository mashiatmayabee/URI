#include<stdio.h>
int hours(int sh,int eh)
{
    int h=eh-sh;
    if(h<0)
    {
        h=h+24;
    }
    if(h==0)
    {
        h=24;
    }
    return h;
}

int main()
{
    int hour,minute,sh,eh,sm,em;
    scanf("%d%d%d%d",&sh,&sm,&eh,&em);
    hour=hours(sh,eh);
    minute=em-sm;
    if(minute<0)
    {
        hour--;
        minute=60+minute;
    }


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);
    return 0;
}

