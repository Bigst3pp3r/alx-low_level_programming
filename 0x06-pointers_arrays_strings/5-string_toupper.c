#include "main.h"

/**
* string_toupper - change all lowercase to uppercase
* @str: pointer
*
* Return: str
*/

char *string_toupper(char *str)
{
	int i;

	int len = strlen(str);

for (i = 0; i < len; i++)

{

if (str[i] >= 'a' && str[i] <= 'z')

{
	str[i] = str[i] - 'a' + 'A';
}

return (str);
}
