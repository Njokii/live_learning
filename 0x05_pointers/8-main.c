#include <stdio.h>

/**
 * modif_my_char_var - sets the char to o and l
 * @cc: modified character
 * @ccc: secod modified character
 *
 * Return: Nothing 
 */

void modif_my_char_var(char *cc, char ccc)
{
	printf("Value of 'cc' : %p\n", cc);
	printf("Address of 'cc' : %p\n", &cc);
	printf("Value of 'ccc' : %c\n", ccc);
	printf("Address of 'ccc' : %p\n", &ccc);
	*cc = 'o';
	ccc = 'l';
}

/**
 * main - How to change a variable from outside the funtion it is 
 * declard in, using pointers.
 *
 * Return: ALways 0
 */

int main(void)
{
	char c;
	char *p;

	p = &c;
	c = 'H';
	printf("Value of 'c' before the call : %c\n", c);
	printf("Address of 'c' : %p\n", &c);
	printf("Value of 'p' : %p\n", p);
	printf("Address of 'p' : %p\n", &p);
	modif_my_char_var(p, c);
	printf("Value of 'p' after the call: %p\n", p);
	printf("Value of 'c' after the call: %c\n", c);
	return (0);
}
