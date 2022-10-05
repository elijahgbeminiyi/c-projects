#include <stdio.h>

/**
* main - this  program prints a value in two formats
* Return: 0
*/

int main(void)
{
	double dbl_num = 123.456;

	printf("The value of %f in floating-point is %f.\n", dbl_num, dbl_num);
	printf("The value of %f in scientific notation is %e.\n", dbl_num, dbl_num);

	return (0);
}
