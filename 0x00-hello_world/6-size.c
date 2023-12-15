#include <stdio.h>
/**
 * main - funtion that prints the sizes of various data types using printf
 * return: 0 (success)
 * */
int main(void)
	char a;
	int b;
	long int c;
	long long int d;
	float e;
       	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(a));
   	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(b));
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(c));
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(d));
	printf("Size of a char: %lu byte(s)\n", (unsigned long) sizeof(e));
return(0);
}
