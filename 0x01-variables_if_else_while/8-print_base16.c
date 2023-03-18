#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int numHex;
	char alHex;
	
	for (numHex = 0; numHex < 10; numHex++)
	{
		putchar(48 + numHex);
	}
	for (alHex = 'a'; alHex < 'g'; alHex++)
	{
		putchar(alHex);
	}
	putchar('\n');
	
	return (0);
}
