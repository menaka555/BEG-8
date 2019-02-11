#include <stdio.h>

int main()
{
    int a,b,x=0,y,z,i;
    //clrscr();
    printf("Input :");
    scanf("%d%d",&a,&b);
    printf("Output :\n");
   
       y=a*b;
       for(i=0;i<y;i++)
       {
           if(i*i==y)
          { printf("Yes");
           x=1;
           break;
          }
          
       }
       if(x==0)
       printf("No");
    return 0;
}
