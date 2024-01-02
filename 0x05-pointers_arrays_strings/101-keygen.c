#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

char* generate_password()
{
int i;
static const char CHARSET[] = "abcdefghijklmnopqrstuvwxyz0123456789";
char* password = (char*)malloc((PASSWORD_LENGTH + 1) * sizeof(char));

if (password == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(EXIT_FAILURE);
}

srand(time(NULL));

for (i = 0; i < PASSWORD_LENGTH; ++i)
{
int index = rand() % (sizeof(CHARSET) - 1);
password[i] = CHARSET[index];
}

password[PASSWORD_LENGTH] = '\0';
return password;
}

void print_password(char* password)
{
printf("Generated password: %s\n", password);
}

int main()
{
char* password = generate_password();
print_password(password);
free(password);
return 0;
}
