#include <stdio.h>

int main ()
{
  char ch='c';
  printf("%d\n",ch);
  switch (ch)
    {
    case 'A':
      printf("case A\n");
      break;
    case 'a':
      printf("case a\n");
      break;
    case 'c':
      printf("case c\n");
      break;
    default:
      printf("None of the above\n");
    }
}
