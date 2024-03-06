#include <stdio.h>
/**
 * main - prints name
 * @argc: number of cmd line argument
 * @argv: array that contains the program
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
