#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The Character to print
 *
 * Return: On success 1.
 * On error, -1 is returnd, and the errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
