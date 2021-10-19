#include "main.h"
  /**
 * _strchr - locates a character in a string
 * @src: source string
 * @c: character to search for
 * Description: searches string for character, returns pointer to char
 * Return: pointer to char
 **/

char *_strchr(char *src, char c)
{
	int n;

	if (src == NULL)
	{
		return (NULL);
	}

	for (n = 0; src[n] != '\0'; n++)
	{
		if (src[n] == c)
		{
			return (&src[n]);
		}

	}

	if (src[n] == c)
	{
		return (&src[n]);
	}
	return (NULL);
}
