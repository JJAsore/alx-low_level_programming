#include "main.h"
/**
 * _isalpha-check if character is lowercase or uppercase
 * @c:character to check if it is lowerase.
 *Return:1-if lowerase/upperase, 0-if not.
 */
int _isalphabet(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
