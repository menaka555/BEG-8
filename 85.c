#include <stdio.h>

#include <string.h>

 

/* Function Prototype */



 

int main()

{
	int i,j,k;
  char a[100000];
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++);
  if(i%2==0)
  {
  	j=2;
  	k=i/2;
  	a[k-1]='*';
  
  	a[k]='*';
  	}
  	
  else
 {
 	 j=1;
 	 k=i/2;
 	 
 	 a[k]='*';
 	 }
 	 for(j=0;j<i;j++)
 	  printf("%c",a[j]);
 	  
 	  return 0;
 	  }
  
