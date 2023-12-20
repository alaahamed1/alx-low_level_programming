#include <stdio.h>

int main(void) {
int c;
unsigned long a = 1, b = 2, c;

printf("%lu, %lu, ", a, b);

for (c = 3; c <= 50; ++c) {
c = a + b;
printf("%lu", c);

if (c != 50) {
printf(", ");
}

a = b;
b = c;
}

printf("\n");
return 0;
}
