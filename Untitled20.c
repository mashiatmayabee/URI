#include<stdio.h>

int main()
{
	int n,i,c=0;
	scanf("%d",&n);
		char a[n];
       scanf("%s",&a);
	for(i=0; i<n-1; i++){
        if(a[i]==a[i+1]){
            c=c+1;
        }
	}
	printf("%d\n",c);
	return 0;
}
