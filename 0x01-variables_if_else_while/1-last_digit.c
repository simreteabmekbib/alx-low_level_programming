#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;

	if (k > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, k);
	else if (k == 0)
		printf("Last digit of %i is %i and is 0\n", n, k);
	else if (k < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, k);

	return (0);
}
