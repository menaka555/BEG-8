#include <stdio.h>

int main()
{
    int a,b,x=0,y,z,i=0,j;
    int r[100000];
    //clrscr();
    printf("Input :");
    scanf("%d",&a);
    printf("Output :\n");
   
      while(a)
      {
          z=a%10;
          r[i]=z;
          i++;
          a=a/10;
      }
      for(j=i-1;j>=0;j--)
      {
          if(r[j]%2!=0)
          printf("%d ",r[j]);
          
      }
    return 0;
}
