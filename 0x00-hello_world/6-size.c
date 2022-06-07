#include<stdio.h>

/**
 * main - Size of file
 *
 * return: Always 0 (success)
 */
int main(void)
{
	float adecima;
	char astring;
	long alongstr;
	long long alongerstr;
	int awholenum;

	printf("Size of a char: %lu byte(s)\n", sizeof(astring));
	printf("Size of an int: %lu byte(s)\n", sizeof(awholenum));
	printf("Size of a long int: %lu byte(s)\n", sizeof(alongstr));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(alongerstr));
	printf("Size of a float: %lu byte(s)\n", sizeof(adecima));
	return (0);
}
