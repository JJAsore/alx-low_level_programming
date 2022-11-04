#include <stdio.h>
#include "main.h"
*main-print name of the program
*@argc: count arguments
*@argv: arguments
*Return:Always 0 (success)
*/
int main(int argc, char *argv)
{
(void) argc;
printf("%d\n", argv[0]);
return (0);
}
