#include <stdio.h>
#include <string.h>

/**
 * rot13 - Encodes a string using rot13.
 * @s: A pointer to the string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
char *encoded;
const char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
const char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i;

if (s == NULL)
return NULL;

encoded = s;

for (i = 0; s[i] != '\0'; i++)
{
const char *current = strchr(input, s[i]);
if (current != NULL)
{
int index = current - input;
s[i] = output[index];
}
}

return (encoded);
}

int main(void)
{
char str[] = "Hello, World! This is rot13 encoding.";
printf("Original: %s\n", str);

rot13(str);
printf("Encoded: %s\n", str);

return (0);
}
