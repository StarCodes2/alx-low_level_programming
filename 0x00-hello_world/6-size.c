#include <stdio.h>
/**
 * main - using the sizeof function
 * 
 * Return: zero
 */

int main(void)
{
	char c;
	int i;
	float f;
	long int li;
	long long int llt;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n" (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));


	return (0);
}	
