#include <stdio.h>

int main()
{
    // int a;
    int a,c=0,d[100000],i,e=0,f=0,b;
   
    printf("Input :\n");
    scanf("%d",&a);
   
   printf("Output :\n");
   f=2;
 for(i=0;i<10000;i++)
 {
    d[i]=f;
    f=f*2;
    
 }
 
 for(i=a+1;i<10000;i++)
 {
     for(e=0;e<10000;e++)
     {
        
     if(i==d[e])
     {
         printf("%d",i);
         f=1;
         break;
     }
     }
     if(f==1)
     break;
 }
    return 0;
}
