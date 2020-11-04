#include <stdio.h>

int main ()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  switch(a%2)
    {
    case 1:
      printf("Your number is Odd\n");
      break;
    case 0:
      printf("Your number is even\n");
      break;
   
    }
}
