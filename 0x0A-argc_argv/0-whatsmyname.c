#include <stdio.h>
#include "main.h"

/**
 * main - will Print number of arguments passed to it.
 * @argc: number of arguments sent to program.
 * @argv: array of pointers 
 * Return: Zero Success
 */
int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);
return (0);
}
