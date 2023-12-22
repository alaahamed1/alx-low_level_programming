#include <stdio.h>

/**
 * find_largest_prime_factor - finds and returns the largest prime factor of a number
 * @n: number to find its largest prime factor
 * Return: largest prime factor
 */
long find_largest_prime_factor(long n) {
long max_prime = -1;
while (n % 2 == 0) {
max_prime = 2;
n = n / 2;
}
for (long i = 3; i * i <= n; i = i + 2) {
while (n % i == 0) {
max_prime = i;
n = n / i;
}
}
if (n > 2) {
max_prime = n;
}
return max_prime;
}
int main(void) {
long number = 612852475143;
long largest_prime = find_largest_prime_factor(number);
printf("%ld\n", largest_prime);
return 0;
}
