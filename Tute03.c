
#include <stdio.h>
int main() 
{
 int i,k,sum = 0;

 printf("Enter Number : ");
 scanf("%d",&k);

 for(i=k ; i>=0 ; --i )
 {
   sum = sum + i;
 }
  
  printf("Sum = %d",sum);
  return 0;
}

