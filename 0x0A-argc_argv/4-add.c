#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - check if string there are digit
 * @str: array str
 *
 * Return: Always 0 
 */

int check_num(char *str)
{
	/*declare variables*/
	unsigned int alx;

	alx = 0;
	while (alx < strlen(str)) /*counts string*/
	{
		if (!isdigit(str[alx])) /*check if there are digits here*/
		{
			return (0);
		}
		alx++;
	}
	return (1);
}

/**
 * main - function prints name of program
 * @argc: count the arguments
 * @argv: the arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])

{

/*Declare variables*/
int alx;
int str_to_int;
int sum = 0;

count = 1;
while (alx < argc) /*Goes through the whole array*/
{
if(check_num(argv[alx]))

{
str_to_int = atoi(argv[alx]); /*ATOI --> convert string to int*/
sum += str_to_int;
}

/*Condition if one of the number contains symbols that are not digits*/
else
{
printf("Error\n");
return (1);
}

alx++;
}

printf("%d\n", sum); /*print sum*/

return (0);
}
