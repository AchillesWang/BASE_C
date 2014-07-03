/*
*		A
	   ABA
      ABCBA
     ABCDCBA
*/
#include<stdio.h>

  int main(void)
{
	int i;
	int j;
   for(int i=1;i<=5;i++)           
{
   for(int j=1;j<=5-i;j++)
   printf(" ");    
   for(j=1;j<=2*i-1;j++)
    a='A';
    printf("%c",a);
	a=a++;
   printf("\n");
}

  return 0;  
}