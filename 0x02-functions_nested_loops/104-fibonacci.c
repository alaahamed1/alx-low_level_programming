#include <stdio.h>
#include "main.h"

int main(void) {
unsigned long long max = 1000000000000000ULL;
unsigned long long prev1 = 0, curr1 = 0, sum1 = 0;
unsigned long long prev2 = 1, curr2 = 2, sum2 = 0;
int fib_num = 98;
unsigned long long fib_sequence[fib_num];
int i;

fib_sequence[0] = prev2;
fib_sequence[1] = curr2;

for (i = 2; i < fib_num; i++) {
sum2 = curr2 + prev2;
sum1 = (sum2 / max) + curr1 + prev1;
sum2 = sum2 % max;

prev1 = curr1;
prev2 = curr2;
curr1 = sum1;
curr2 = sum2;

if (curr1 != 0) {
fib_sequence[i] = curr1 * max + curr2;
} else {
fib_sequence[i] = curr2;
}
}

for (i = 0; i < fib_num; i++) {
printf("%llu", fib_sequence[i]);
if (i < fib_num - 1) {
printf(", ");
}
}
printf("\n");

return 0;
}
