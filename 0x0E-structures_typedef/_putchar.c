#include <unistd.h>
/**
 * _putchar - print the character c to stdout
 * @c: the character to print
 * Return: 1 on success, on error return -1
 * error is set appropriately
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
