#include <stdio.h>

/**
  * main - prints the size of various types on the computer
  * it is compiled and run on.
  * Return: Always 0
  */

int main(void)
{
printf("Size of char is: %zu byte(s)\n", sizeof(char));
printf("Size of int is: %zu byte(s)\n", sizeof(int));
printf("Size of long is: %zu byte(s)\n", sizeof(long));
printf("Size of long long is: %zu byte(s)\n", sizeof(long long));
printf("Size of float is: %zu byte(s)\n", sizeof(float));
return (0);
}
