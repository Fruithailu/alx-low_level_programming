#include <unistd>

/**
 * _putchar -  writes the character c to stdout
 * @c: the character too print
 *
 * Return: on sucess 1
 * on error, -1 is returned, and error no is set appropriatley
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
