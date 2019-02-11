#include <stdio.h>

int main()
{
    int b[100000],i,m,n,j,k;
    char a[100000];
    gets(a);
    for(n=0;a[n]!='\0';n++);
    for(i=0;i<n;i++)
{
  for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            m=a[i];
            a[i]=a[j];
            a[j]=m;
        }
    }
}
for(j=0;j<i;j++)
printf("%c",a[j]);
    return 0;
}
