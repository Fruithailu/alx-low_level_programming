#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: always 0 (success)
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
	}

		a++;
	}
	return (t);
}
