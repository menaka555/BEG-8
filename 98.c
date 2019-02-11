#include <stdio.h>

int main()
{
    // int a;
    int a,c=0,d[100000],b,i,e,f=0;
   
    printf("Input :\n");
    scanf("%d",&a);
   
   printf("Output :\n");
  while(a)
  {
    scanf("%d",&d[c]);
    c++;
    a--;
  }
   for(i=0;i<c;i++)
   {
        if(d[i]>d[i+1])
        {
            printf("\n%d",i);
            break;
    
        }
   }
    return 0;
}
