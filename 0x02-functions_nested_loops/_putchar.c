<<<<<<< HEAD
#include <unistd.h>

=======
#include "main.h"
#include <unistd.h>
>>>>>>> df4adbf22c78e222f8cc2d8bd202b1ec2019f3ed
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
<<<<<<< HEAD
=======

>>>>>>> df4adbf22c78e222f8cc2d8bd202b1ec2019f3ed
