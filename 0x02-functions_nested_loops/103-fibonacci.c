#include <stdio.h>

int main(void) {
int i = 0;
long long a = 1, b = 2, sum = b;

while (b + a < 4000000) {
b += a;
if (b % 2 == 0) {
    sum += b;
}
a = b - a;
++i;
}
printf("%lld\n", sum);
return 0;
}
