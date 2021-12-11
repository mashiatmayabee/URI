#include<stdio.h>
int main()
{
    int i;
    float s=0;
    for(i=1;i<=100;i=i+1)
    {
        s=s+(1.0/i);
    }
    printf("%0.2f\n",s);
}
