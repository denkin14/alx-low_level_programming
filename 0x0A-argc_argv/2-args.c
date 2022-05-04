#include <stdio.h>
#include "main.h"

/**
 * main - function prints the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

/*Declare variables*/
int count = 0;

if (argc > 0)
{
/*using while - Print each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}
