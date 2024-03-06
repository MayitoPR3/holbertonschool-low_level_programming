#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
/**
 * main - prints name
 * @argc: number of cmd line argument
 * @argv: array that contains the program
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int j, m, add = 0;

	for (j = 1; j < argc; j++)
	{
		for (m = 0; argv[j][m] != '\0'; m++)
		{
			if (!isdigit(argv[j][m]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[j]);
	}
	printf("%d\n", add);
	return (0);
}
