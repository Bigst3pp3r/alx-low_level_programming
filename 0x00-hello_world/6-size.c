#include <stdio.h>

/**
  * main - prints the size of various types on the computer
  * it is compiled and run on.
  * Return: Always 0 (Success)
  */

int main(void)
{
printf("The size of char is %zu byte(s)\n", sizeof(char));
printf("The size of short is %zu byte(s)\n", sizeof(short));
printf("The size of int is %zu byte(s)\n", sizeof(int));
printf("The size of long is %zu byte(s)\n", sizeof(long));
printf("The size of long long is %zu byte(s)\n", sizeof(long long));
printf("The size of float is %zu byte(s)\n", sizeof(float));
printf("The size of double is %zu byte(s)\n", sizeof(double));
printf("The size of long double is %zu byte(s)\n", sizeof(long double));
return (0);
}
