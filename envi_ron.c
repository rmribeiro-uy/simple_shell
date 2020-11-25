#include "holberton.h"

/**
 * *_strcpy - copy string pointed
 * @src: source
 * @dest: destiny
 *
 * Return: pointed to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != 0; len++)
	{
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}


/**
 * envi_ron - Take the absolute path of the command
 * @path: a pointer to to a alltokens[0]
 *
 * Return: Always 0.
 */
char *envi_ron(char *path)
{
	char *copyenv = NULL, *tempenv = NULL, *aux = NULL;
	int i = 0;

	while (environ[i] != NULL)
	{
		copyenv = malloc(_strlen(environ[i]) + 1);
		if (copyenv == NULL)
		{
			perror("ERROR: Insufficient memory allocation");
			exit(1);
		}
		_strcpy(copyenv, environ[i]);
		strtok(copyenv, "=");
		if (_strcmp(copyenv, path) == 0)
		{
			aux = strtok(NULL, "=");
			tempenv = _strdup(aux);
			aux = NULL;
			free(copyenv);
			return (tempenv);
		}
		free(copyenv);
		i++;
	}
	return (NULL);
}

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str:  string given as a parameter.
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i, ii;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	new_str = (char *)malloc(i * sizeof(char) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	for (ii = 0; ii < i; ii++)
	{
		new_str[ii] = str[ii];
	}

	return (new_str);
}

/**
 * _strcmp - function to compare two strings
 * @s1: string compared
 * @s2: string compared
 * Return:  0 if they are the same and -1 if not
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
		a++;
	}
	return (0);
}
