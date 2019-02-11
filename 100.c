#include <stdio.h>

int main()
{
    // int a;
    int a,c=0,d[100000],i,e=1,f=0;
   
    printf("Input :\n");
    scanf("%d",&a);
   
   printf("Output :\n");
  while(a)
  {
     d[c]=a%10;
     a=a/10;
     c++;
  }
   for(i=0;i<c;i++)
   e=e*d[i];
   printf("%d",e);
    return 0;
}
