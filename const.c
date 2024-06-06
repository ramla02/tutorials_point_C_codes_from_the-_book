#include <stdio.h>
/**
* main - Entery point
* Description: defining contatant using the keyword "const".
* Return: 0 for success
*/
int main(void)
{
	const int LENGTH = 10; 
	const int WIDTH = 5;
	const char NEWLINE = '\n';
	int area;
	
	area = LENGTH * WIDTH;	
	printf("Value is area : %d", area);
	printf("%c", NEWLINE);
return (0);
}
