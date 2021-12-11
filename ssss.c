#include<stdio.h>
int main()
{
    int a[7]={3,6,98,2,0,4,65},b[7],ans[7],max,i,j,k,c;
    scanf("%d",&k);
    b[k-1]=a[k-1];
    for(i=0;i<7;i++) {
        //printf("%d\n",c);
        for(j=0;j<7;j++) {
            if(j!=k) {
                if(j==c){
                    continue;
                }
                if(a[j]>max) {
                    max=a[j];
                    c=j;
                }
            }
        }
        if(i!=k-1) {
            b[i]=max;
        }
    }
    i=0;
    j=6;
    while(i<7) {
        if(i!=k-1) {
            ans[j]=b[i];
        }
        i++;
        j--;
    }
    for(i=0;i<7;i++) {
        printf("%d\n",b[i]);
    }
    return 0;
}
