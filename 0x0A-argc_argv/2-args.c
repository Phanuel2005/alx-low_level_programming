#include <stdio.h>

/**
 * main - calls the program
 * @argc: counts the number of parameters passed to the program
 * @argv: stores the argument passed to the program as strings
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
