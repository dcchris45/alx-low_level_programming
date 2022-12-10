#include <stdio.h>
/**
 * main - print out sizes of data type in c
 * code by dcchris45
 *Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of an char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long sizeof(b));
	printf("Size of an long int: %lu byte(S)\n", (unsigned long)sizeof(c));
	printf("Size of an long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
	printf("Size of an float: %lu byte(S)\n", (unsigned long)sizeof(f));
	return (0);
}
