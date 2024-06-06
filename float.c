#include <stdio.h>
#include <float.h>
/**
* main - where the program execution starts.
* Description: the program prints the storage space taken
* by  a float type and its range value.
* Return: 0 for the successful execution.
*/
int main(void)
{
printf("Storage size for float: %ld\n", sizeof(float));
printf("Minimum float positive value: %E\n", FLT_MIN);
printf("Maximum float positive value: %E\n", FLT_MAX);
printf("Precision value: %d\n", FLT_DIG);
}
