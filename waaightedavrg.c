#include<stdio.h>
int main()
{
    int n;
    float a,b,c,sum,avrg,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)

    {
        scanf("%f%f%f",&a,&b,&c);
        sum=(a*2)+(b*3)+(c*5);
        printf("%0.1f\n",sum/10);
    }
    return 0;
}
