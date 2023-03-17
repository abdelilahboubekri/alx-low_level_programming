#include <stdio.h>
/**
 * main - Entry point
 * Description: using sizeof to print the size of various types.
 * Return: (0) (Success)
 */

int main(void)
{
printf("Size of a char: %u byte(s)\n", sizeof(char));
printf("Size of a int: %u byte(s)\n", sizeof(int));
printf("Size of a long int: %u byte(s)\n", sizeof(long int));
printf("Size of a long long int: %lu byte(s)\n", sizeof(long log int));
printf("Size of a float: %u byte(s)\n", sizeof(float));
return (0);
}
