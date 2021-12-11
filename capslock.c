#include<stdio.h>
int main()
{
    int n,i;
    char c[105];
    scanf("%s",&c);
    n=strlen(c);

    for(i=1;i<n;i=i+1)
    {
        if(c[0]>='a'&&c[0]<='z'&&c[i]>='A'&&c[i]<='Z')
        {
            printf("%s\n",c);
        }
        else{
            if(c[0]>='a'&&c[0]<='z'){
                c[0]=c[0]-'a'+'A';
            }
            if(c[i]>='A'&&c[i]<='Z'){
                c[i]=c[i]-'a'+'A';
            }
          if(c[i]>='A'&&c[i]<='Z')
            {
                printf("%s\n",c);
            }}

    }
    return 0;
}
