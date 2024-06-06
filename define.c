#include <stdio.h>
#define LENGTH 10 
#define WIDTH 5
#define NEWLINE '\n'
/**
* main - the start of the execution
* description: a program using #define to define
* a constatnt, example of to define constant using #define
* is as follow(#define identifier value).
* Return: 0 for the successful execution
*/
int main(void)
{
	int area;
	area = LENGTH * WIDTH;
	printf("Value of area : %d\n", area);
	printf("%c", NEWLINE);
	return (0);
}
