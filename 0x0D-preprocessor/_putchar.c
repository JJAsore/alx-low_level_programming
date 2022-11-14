#include <unistd.h>
/**
 * _putchar - writes the characterc c to stdout
 * @c: the character to print
 * Return: 0n success 1, on error, -1 is returned
 * error is set appropriately
 */
int _putchar(char c)
{
return(write(1, &c, 1));
}
