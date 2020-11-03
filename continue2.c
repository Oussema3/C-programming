#include <stdio.h>
// main : print odd number
int main ()
{
  int counter;
  for (counter=0; counter <=10 ; counter++)
    {
  

  if (counter % 2 == 0)
    continue;
  printf("%d\n", counter);
    }
}
