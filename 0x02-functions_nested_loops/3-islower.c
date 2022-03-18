/**
 * _islower - return 1 if lower case alphabet
 *
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
