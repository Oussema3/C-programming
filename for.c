#include <stdio.h>

int main ()

{
  int age;
  for (age = 0;age <= 10 ;age ++)
    printf("%d\n", age);
}
/*
LETS SAY WE WANT A LOOP WITHOUT INITIALIZATING AND STOP IT AFTER GIVING THE FIRST FIVE RESULTS 

#include <stdio.h>
int main ()
{
int counter;
for (; ;)
{
counter ++;
if (counter >=5)
break;
}
}
