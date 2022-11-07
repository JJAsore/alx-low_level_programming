#include <stdio.h>
#include "main.h"
/**
 * main-print thwe name of the program
 * @argc: count arguments
 * @argv: arguments
 * Return: always return 0 (success)
 */
int main(int argc, char *argv[])
{
(void) argv; /*ignore argv*/
printf("%i\n", argc - 1);
return (0);
}
