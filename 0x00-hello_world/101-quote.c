#include <unistd.h>

/**
  * main - the code prints exactly and that piece of art is useful"
  * - Dora Korpar, 2015-10-19 followed by a new line, to the standard error.
  * Return: Always 0 (Success)
  */

int main(void)
{
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, msg, 47);
return (1);
}
