#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ar[n];
    ar[0]=0;
    ar[1]=1;
    for(i=2;i<n;i++)
    {
        ar[i]=ar[i-1]+ar[i-2];
      }
      for(j=0;j<n-1;j++)
      {
          printf("%d ",ar[j]);
      }
      printf("%d\n",ar[n-1]);
    return 0;
}
