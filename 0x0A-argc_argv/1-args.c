#include "main.h"
#include <stdio.h>

/**
* main - Entry point
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
*
* Return: 0 (Success)
*/
int main(int argc, char *argv[])
{
int count = argc - 1;

(void)argv; /* Unused parameter */

printf("%d\n", count);

return (0);
}
