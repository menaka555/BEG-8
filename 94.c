#include <stdio.h>

int main()
{
    int a,b[100000],c=0,d,i,e;
    printf("Input :");
    scanf("%d%d",&a,&c);
    for(i=0;i<a;i++)
    scanf("%d",&b[i]);
   printf("Output :\n");
   
   
   printf("\n%d",b[c-1]);
    return 0;
}
