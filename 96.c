#include <stdio.h>

int main()
{
    // int a;
    int a,c=0,d[100000],i,e=0,f=0,b;
   
    printf("Input :\n");
    scanf("%d%d%d",&a,&b,&c);
   
   printf("Output :\n");
   f=a;
 for(i=0;i<c;i++)
 {
    d[i]=f;
    f=f+b;
 }
 for(i=0;i<c;i++)
 e=e+d[i];
 printf("%d",e);
    return 0;
}
