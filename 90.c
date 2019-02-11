#include <stdio.h>

int main()
{
    int b[100000],i,m,n,j,k;
    char a[100000];
    gets(a);
    for(n=0;a[n]!='\0';n++);
    for(i=0;i<n;i++)
{
  if((a[i]>=48)&&a[i]<=57)
  printf("%c",a[i]);
}

    return 0;
}
