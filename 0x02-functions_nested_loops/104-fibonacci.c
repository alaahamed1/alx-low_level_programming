#include <stdio.h>

int main(void) {
unsigned long a = 1, b = 2, nextTerm;

printf("%lu, %lu, ", a, b);

for (int i = 3; i <= 98; ++i) {
nextTerm = a + b;

printf("%lu", nextTerm);

if (i != 98) {
printf(", ");
}

a = b;
b = nextTerm;
}

printf("\n");
return 0;
}
