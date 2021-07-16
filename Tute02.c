
#include <stdio.h>

int main() 
{
   float distance;
   float rental;
  
  printf("Enter the Distance : ");
  scanf("%f",&distance);

  if(distance <= 30)
  {
    rental = distance * 50.0;
  }
  else
  {
    rental = (distance - 30) * 40.0 + 1500.0;
  }
  printf("\n");
  printf("%.2f",rental);
  return 0;
}
