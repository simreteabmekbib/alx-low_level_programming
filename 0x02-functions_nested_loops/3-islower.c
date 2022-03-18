/**
 * _islower - returns 1 if char is lowercase
 *
 * @c: character to be checked if lower case, type int
 *
 * Return: 1 if lower case, 0 otherwise
 **/

int _islower(int c)
{
	int a = 97;

	while (a <= 122)
	{
		if (c == a)
		{
		return (1);
		}
		a++;
	}
	return (0);
}
