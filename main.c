#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    char *str = "Chris";
    char *str2 = "Welcome";
    char character = 'a';
    char character2 = 'b';
    /* int len2; */

    len = _printf("Let's try to printf a simple sentence.\n");
   /*  len2 = printf("Let's try to printf a simple sentence.\n"); */

	printf("%d\n", len);
	_printf("Let's tr%%y to print a simple sentence.\n");
	_printf("%c %c  girl\n", character, character2);
	_printf("Hello %s %s\n", str, str2);
	len2 = _printf("Hello %s %s\n", str, str2);
	printf("%d\n", len2);
	_printf("%i\n", len);

return (0);
}
