#include <stdio.h>

int main()
{
    int i,j,k=0,a,b,c,d;
   // char a[1000000],b[1000000],c[1000000];
    printf("Input :");
   // gets(a);
   scanf("%d%d",&a,&b);
    printf("Output :\n");
    if(a>b)
   { c=b;
    k=a;}
    else
    {c=a;
    d=b;}
    while(c)
    {
        if(d%c==0)
        {
            printf("%d",d);
            break;
        }
        d++;
    }
    return 0;
}
