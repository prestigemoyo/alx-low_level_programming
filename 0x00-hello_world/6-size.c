#include <stdio.h>

/**
 * main -displays sizes of different types
 *
 * Return: always 0 (Success)
 */

int main(void)
{
char charType;
int intType;
long int longIntType;
long long int longLongType;
float floatType;

printf("Size of a char:%zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longLongType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
