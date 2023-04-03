/**
 * _memcpy - copies a memory area
 *
 * @dest: A string
 *
 * @src: A string
 *
 * @n: An unsigned integer
 *
 * Return: A string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
