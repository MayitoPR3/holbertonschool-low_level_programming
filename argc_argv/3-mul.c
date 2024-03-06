#include<stdio.h>
/**
 * main - prints name
 * @argc: number of cmd line argument
 * @argv: array that contains the program
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
