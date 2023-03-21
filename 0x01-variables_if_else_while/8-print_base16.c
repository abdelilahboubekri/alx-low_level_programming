#include<stdio.h>
/**
 * main - prints all th numbersof base 16 in lowercase
 * folllowed by a new line
 * Return always 0 (Succcess)
 */
int main(void)
{
	int n;
	char cha;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (cha = 'a'; cha <= 'f'; cha++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
