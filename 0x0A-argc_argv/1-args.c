#include <stdio.h>			


/**
		
 * main-print the number of arguments passed.
 * @argc:number of commandline arguments.
 * @argv:pointer to an array of commandline arguments.
 * Return:0-success, non-zero-fail.
 */
				
int main(int argc, char *argv[] __attribute__((unused)))
		
{
		
(void) argv; 
		
	printf("%d\n", argc - 1);
	return (0);
		
}

