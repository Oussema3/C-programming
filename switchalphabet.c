#include <stdio.h>

int main ()
{
  char ch;
  printf("Please enter a character\n");
  scanf("%c",&ch);
  switch(ch)
    {
    case 'a' ... 'z':
      printf("Ur character is in lower case\n");
      break;
    case 'A' ... 'Z':
      printf("Ur character is in Upper case\n");
      break;
    default:
      printf("Please Enter  valic character\n");

    }
}
