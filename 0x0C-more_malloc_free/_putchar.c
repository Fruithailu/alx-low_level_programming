int _putchar(char c);

#include <unistd.h>

/**
 * _putchar - write the character c to stdout
 * @c: the character to print
 * Return: 1if true, 0 if false
 * On error, -1 return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
