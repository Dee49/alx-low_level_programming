#include <stdio.h>

/**
 * main - A program that prints the alphabets
 * followed by a new line
 * Return: 0 (Success)
 */

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
