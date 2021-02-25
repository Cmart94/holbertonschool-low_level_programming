#include "holberton.h"

/**
 * is_palindrome - function that checks if the string is a palindrome
 * @s: String to check
 * Return: 1 if it is a palindrome, 0 if it is not a palindrome
 */
int is_palindrome(char *s)
{
	int len;

	len = strlength(0, s);
	return (CheckPalindrome(0, len - 1, s));
}

/**
 * strlength - function that calculate the length of a string
 * @i: actual interation
 * @s: char to find the length
 * Return: i with the final lenght
 */
int strlength(int i, char *s)
{
	if (*s != '\0')
	{
		return (strlength(i + 1, s + 1));
	}

	return (i);
}

/**
 * CheckPalindrome - Function that chechk each pointer index for same chars
 * @i: iterator
 * @len: length of the string;
 * @s: string pointer.
 * Return: 1 if is a palindrome, 0 if it is not a palindrome
 */
int CheckPalindrome(int i, int len, char *s)
{
	if (s[i] == s[len])
		return (CheckPalindrome(i + 1, len - 1, s));
	if (s[i] == s[len] || i > len)
		return (1);
	if (s[i] != s[len])
		return (0);
	return (0);
}
