#include <stdio.h>

int main()
{
    int a,b,c=0,i;
    char d[100000];
    printf("Input :");
    gets(d);
    printf("Output :\n");
    for(i=0;d[i]!='\0';i++)
    {
        if((d[i]=='a')||(d[i]=='e')||(d[i]=='i')||(d[i]=='o')||(d[i]=='u')||(d[i]=='A')||(d[i]=='E')||(d[i]=='I')||(d[i]=='O')||(d[i]=='U'))
        {
            printf("Yes");
            c=1;
            break;
        }
    }

   if(c==0)
   printf("No");
   
    return 0;
}
