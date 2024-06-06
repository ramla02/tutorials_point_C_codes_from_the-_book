#include <stdio.h>
/**
* main - is the main function.
* Description: variable declaration, variable definition,
* variable initialization.
* Return: 0 for the successeful execution.
*/

/* variable declaration*/
/* extern int a, b;*/
/*extern int c;*/
/*extern float f;*/
/* externs should be avoided in .c files.*/
/* that is betty's complain*/

int main(void)
{
	/* variable definition*/
	int a, b;
	int c;
	float f;

	/* variable initialization*/
	a = 10;
	b = 20;
	c = a + b;

	printf("Value of c: %d\n", c);

	f = 70.0 / 3.0;
	printf("Value of f: %f\n", f);
	return (0);
}
