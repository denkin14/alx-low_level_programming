#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - function to print the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int den, nis;
if (argc == 3)
{
den = atoi(argv[1]);
nis = atoi(argv[2]);
printf("%d\n", den *nis);
return (0);
}
printf("Error\n");
return (1);
}
