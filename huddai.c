#include<stdio.h>
int main()
{
    int i=0,j;
    int n=10;
    while(i<=n)
    {
        j=i;
        while(j<n)
        {
            j++;
        }
     printf("%2d",j);
     n--;
     i++;
    }
    return 0;
}
