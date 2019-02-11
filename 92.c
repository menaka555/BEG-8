#include <stdio.h>

int main()
{
    int a,b[100000],c=0,d,i,e;
    scanf("%d",&a);
   for(i=0;i<a;i++)
   scanf("%d",&b[i]);
   for(i=0;i<a;i++)
   c=c+b[i];
   printf("\n%d",c);
    return 0;
}
