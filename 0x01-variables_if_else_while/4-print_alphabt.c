#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
    * main - This program prints alphabet in lowercase then uppercase
    *
    * Return: Always 0
    */

int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
else
{
putchar('\n');
}
return (0);
}

