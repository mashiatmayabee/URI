#include<stdio.h>
int main()
{
    int a,i,j=0,n[100];
    scanf("%d",&a);
    for(i=0;i<1000;i++)
    {
        if(j!=a-1)
        {            j=j+1;

            printf("N[%d] = %d\n",i,j);
        }
        else
        {j=j+1;
            printf("N[%d] = %d\n",i,j);
                        j=0;

        }
    }

}
