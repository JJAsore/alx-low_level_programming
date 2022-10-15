#include <stdio.h>
/**
* main-program entry point
 * Return: 0 no erro, non zerror if error
 */
int main(void)
{
int num;
for (num = '0'; num <=  '9'; num++)
{
putchar(num);
if (num == '9')
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
