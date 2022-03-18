/**
 * _isalpha - returns 1 if char is alphabet
 *
 * @c: character to be checked if alphabet, type int
 *
 * Return: 1 if alphabet, 0 otherwise
 **/

int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		return (1);
	return (0);
}
