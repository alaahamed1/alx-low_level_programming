#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: a pointer to the string
 * Return: a pointer to encoded string
 */

#include <stdio.h>

char *rot13(char *s)
{
if (s == NULL) {
return NULL;
}

char *encoded = s;
const char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
const char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

while (*s != '\0')
{
char *current = strchr(input, *s);
if (current != NULL) {
int index = current - input;
*s = output[index];
}
s++;
}

return (encoded);
}

int main()
{
char str[] = "Hello, World! This is rot13 encoding.";
printf("Original: %s\n", str);

rot13(str);
printf("Encoded: %s\n", str);

return (0);
}

