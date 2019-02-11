#include <stdio.h>

int main()
{
    int i,j,k=0;
    char a[1000000],b[1000000],c[1000000];
    printf("Input :");
    gets(a);
    printf("Output :\n");
    for(i=0;a[i]!='\0';i++)
    {
        
     for(j=i+1;a[j]!='\0';j++)
     {
         if(a[i]==a[j])
         {
             printf("No");
             k=1;
             break;
         }
         
         }
     }
     if(k==0)
     printf("Yes");
    return 0;
}
