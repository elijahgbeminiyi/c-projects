#include <stdio.h>

/**
* main - function performs certain arithmetic operations
* Return: returns 0
*/

int main(void)
{
	int x = 1, y = 3;

	printf("Given that x = %d, and y = %d.\n", x, y);
	printf("The operation x += y, results %d.\n", x += y);
	printf("The operation x += -y, results %d.\n", x += -y);
	printf("The operation x -= y, results %d.\n", x -= y);
	printf("The operation x -= -y, results %d.\n", x -= -y);
	printf("The operation x *= y, results %d.\n", x *= y);
	printf("The operation x *= -y, results %d.\n", x *= -y);

	return (0);
}
