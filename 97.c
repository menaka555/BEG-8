#include <stdio.h>

int main()
{
    // int a;
    int a,c=0,d[100000],i,e,f=0;
   
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
   printf("%d",d[i]);
    return 0;
}
