#include <stdio.h>

int main (void)
{

	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("The size of an char is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(i));
	printf("The size of an long int: %lu.\n", (unsigned long)sizeof(li));
	printf("The size of an long long int: %lu.\n" (unsigned long)sizeof(lli));
	printf("The size of an float: %lu.\n", (unsigned long)sizeof(f));

	return(0);
}
