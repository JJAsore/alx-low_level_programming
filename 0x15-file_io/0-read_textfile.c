#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the standard output
 *@filename: filename
 *@letters: actual number of letters it could read and print
 *Return: 0 if file cannot be opened or filename is NULL or write fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file, red, print;
char *buffer;
if (filename == NULL)
return (0);
file = open(filename, O_RDONLY);
if (file == -1)
return (0);
buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
return (0);
red = read(file, buffer, letters);
if (red == -1)
return (0);
buffer[red] = '\0';
print = write(STDOUT_FILENO, buffer, red);
if (print == -1 || print != red)
return (0);
file = close(file);
if (file == -1)
return (0);
free(buffer);
return (print);
}
