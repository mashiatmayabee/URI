#include <stdio.h>
int main()
{
    double a,b=1,c, S=0;
    for(a=1; a<=39; a+=2)
    {
        c=a/b;
        S+=c;
        b*=2;
    }
    printf("%.2lf\n",S);
    return 0;
}/*#include<stdio.h>
int main()
{
    int i,a=3,b=2;
    double s=0;
    while(a<=39)
    {
        s=s+(a/b);
        a=a+2;
        b=b*2;
    }
    printf("%0.2lf\n",1+s);
    return 0;
}
*/
