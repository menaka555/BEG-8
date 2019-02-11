#include <stdio.h>

int main()
{
    int i,j,k=0;
    char a[1000000],b[1000000],c[1000000];
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        b[k]=a[i];
        i++;
        c[k]=a[i];
        k++;
    }
     for(i=0;b[i]!='\0';i++)
     printf("%c",b[i]);
     printf("\t");
      for(i=0;c[i]!='\0';i++)
     printf("%c",c[i]);
    return 0;
}
