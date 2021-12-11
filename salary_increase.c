#include<stdio.h>
int main()
{
    float salary,increase;
    int percentage;
    char ch='%';
    scanf("%f",&salary);
    if(salary>0&&salary<=400)
    {
        percentage=15;
    }
    if(salary>=400.01&&salary<=800)
    {
        percentage=12;
    }
    if(salary>=800.01&&salary<=1200)
    {
        percentage=10;
    }
    if(salary>=1200.01&&salary<=2000)
    {
        percentage=7;
    }
    increase=salary*percentage/100;
    printf("Novo salario: %0.2f\nReajuste ganho: %0.2f\nEm percentual: %d %c",salary+increase,increase,percentage,ch);
    printf("%\n");
    return 0;

}
