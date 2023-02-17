#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - This program will assign a random number to the variable n
  * each time it is executed.
  * Return: Always 0
  */

int main(void)
{
int n;
srand(time(NULL));
n = rand() % 201 - 100;
printf("%d\n", n);
if (n > 0)
{
printf("is positive\n");
}
else if (n == 0)
{
printf("is zero\n");
}
else (n < 0)
{
printf("is negative\n");
}
return (0);
}
