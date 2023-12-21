#include <stdio.h>

int main(void) {
unsigned long a = 1, b = 2, nextTerm;
int i = 3;

printf("%lu, %lu, ", a, b);

while (i <= 98) {
nextTerm = a + b;
printf("%lu", nextTerm);

if (i != 98) {
printf(", ");
}

a = b;
b = nextTerm;
i++;
}

printf("\n");
return 0;
}
