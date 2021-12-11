#include<stdio.h>
int main()
{
    char a[20],b[20],c[20];
    scanf("%s%s%s",&a,&b,&c);
    if(a=="vertibrado")
    {
      if(b=="ave")
      {
          if(c=="carnivor")
          {
              printf("aguia\n");
          }
          else if(c=="onivoro")
          {
              printf("pomba\n");
          }
      }
      else if(b=="mamifero")
      {
          if(c=="onivoro")
          {
              printf("homem\n");
          }
          else if(c=="herbivoro")
          {
              printf("vaca\n");
          }
      }
    }
    else if(a=="invertebrado")
    {
        if(b=="inseto")
        {
            if(c=="hematofago")
            {
                printf("polga\n");
            }
            else if(c=="herbivoro")
            {
                printf("lagarta\n");
            }
        }
        else if(b=="anelideo")
        {
            if(c=="hematofago")
            {
                printf("sanguessuge\n");
            }
            else if(c=="onivoro")
            {
                printf("minhaca\n");
            }
        }
    }
    return 0;
}
