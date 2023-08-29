/**
 * _strchr - a function that locates a character in a string
 *
 * @s: pointer to our string array input
 * @c: character to locate from the input
 *
 * Return: first character occurrence or null if not found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	/**
	 * if our while condition is not satisfied
	 * it means c is '\0', we should then return
	 * the pointer to the '\0' of the string
	*/
	if (*s == c)
		return (s);
	/*return null if not found*/
	return ('\0');
}
