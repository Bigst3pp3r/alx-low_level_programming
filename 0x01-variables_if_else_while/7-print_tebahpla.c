#include <stdio.h>
#include <unistd.h>

/**
    * main - This program prints alphabet in lowercase then uppercase
    *
    * Return: Always 0
    */
int main(void)
{
int a;
for (a = 'z'; a >= 'z'; a--)
{
putchar(a);
}
putchar('\n');
return (0);
}
