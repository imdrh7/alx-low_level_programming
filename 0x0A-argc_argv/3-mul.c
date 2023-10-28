#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print the sum of two numbers.
 * @argc: Number of command-line arguments.
 * @argv: Pointer to an array of command-line arguments.
 * Return: 0 on success, a non-zero value on failure.
 */

int main(int argc, char *argv[])
{
    int sum;

    if (argc == 3)
    {
        sum = atoi(argv[1]) * atoi(argv[2]);
        printf("%d\n", sum);
    }
    else
    {
        printf("Error\n");
        return(1);
    }
}
