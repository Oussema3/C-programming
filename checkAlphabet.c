#include <stdio.h>


int main ()
{
  char ch;
  printf("Please enter a character\n");
  scanf("%c", &ch);
  if (ch >='a' && ch <= 'z')
    {
    printf("ur character is in lower case\n");
    }
 else if (ch >= 'A' && ch <= 'Z')
    {
     printf("ur character is Upper case\n");
    }
 else
    {   
	printf("please enter a character\n");
    }
  return 0;
}
