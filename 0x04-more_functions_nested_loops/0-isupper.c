/**
 * _isupper - Checkes for uppercase character
 * @c: Character to be checked
 * Return: returns 1 if the character is uppercase
 * return 0 if the character is not an uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
