#include <stdio.h>

int main()
{   
    int n,a=1,b=0,y,c;
    printf("Input : \n");
    scanf("%d",&n);
    a=n;c=n;
    
    while(a)
    {
        y=a%10;
        b=b*10+y;
        a=a/10;
    }
    if(b==c)
    printf("\nOutput : Yes");
    else
    printf("\nOutput : No");
    return 0;
}
