#include <stdio.h>

int main()
{
    int a,x=0,y,z,i;
    //clrscr();
    printf("Input :");
    scanf("%d",&a);
    printf("Output :\n");
   for(i=1;i<=a;i++)
   {
       if(a%i==0)
       printf("%d ",i);
   }
    return 0;
}
