#include "main.h"
/**
 * isLower - checks if a character is lowercase
 * @c: The character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int isLower(char c)
{
return (c >= 'a' && c <= 'z');
}
/**
 * isSeparator - checks if a character is a separator
 * @c: The character to check
 * Return: 1 if c is a separator, 0 otherwise
 */
int isSeparator(char c)
{
int subi;
char sep[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}'};
for (subi = 0; subi < 13; subi++)
{
if (c == sep[subi])
{
return (1);
}
}
return (0);
}
/**
 * cap_string - all words into uppercase
 * Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @str: the string
 * Return:string changed
 */
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (isLower(str[i]))
{
if (i == 0 || isSeparator(str[i - 1]))
{
str[i] -= ('a' - 'A');
}
}
}
return (str);
}
