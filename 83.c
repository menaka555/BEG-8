#include <stdio.h>

int main()
{
    int a,b,c=0,d=0,i;
  //  char d[100000];
    printf("Input :");
scanf("%d%d%d",&a,&b,&c);
    printf("Output :\n");
    for(i=b+1;i<c;i++)
    {
       if(a==i)
       {
           printf("Yes");
           d=1;
       }
        
    }

   if(d==0)
   printf("No");
   
    return 0;
}
