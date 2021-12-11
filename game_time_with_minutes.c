#include<stdio.h>
int main()
{
    int start_h,end_h,start_m,end_m,hour,minute;
    scanf("%d %d %d %d",&start_h,&start_m,&end_h,&end_m);
    hour=end_h-start_h;
    minute=end_m-start_m;
    if(minute<0&&hour>0)
    {
        minute=minute+60;
        hour--;
    }
    else if(hour<0)
    {
        hour+=24;
    }
    else if(hour==0)
    {
        hour=24;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour ,minute);
    return 0;



}
