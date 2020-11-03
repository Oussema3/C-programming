#include <stdio.h>
int main ()
{
  int age = 23;
  int x;
  // age >= 18 ? printf("you are adult \n") : printf("You are minor");
  x = (age >= 18) ? 1 :0 ;
  printf("%d \n", x);
  return 0;
}
