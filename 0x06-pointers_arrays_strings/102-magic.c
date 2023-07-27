#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * This function serves as the entry point for the program execution. It
 * performs the necessary tasks to accomplish the program's goal and then
 * returns an integer value to indicate the exit status.
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	    int n;
	    int a[5];
	    int *p;

	    a[2] = 1024;
	    p = &n;
	    /* Write your line of code here... */
	    *(p + 5) = 98;
	    /* ...so that this prints 98\n */
	    printf("a[2] = %d\n", a[2]);
	return (0);
}
