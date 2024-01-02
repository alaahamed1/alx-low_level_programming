# Directory Contents

### 0-reset_to_98.c

This file contains a function that takes a pointer to an integer as a parameter and updates the value it points to 98.
Prototype: `void reset_to_98(int *n);`

### 1-swap.c

This file contains a function that swaps the values of two integers.
Prototype: `void swap_int(int *a, int *b);`

### 2-strlen.c

This file contains a function that returns the length of a string.
Prototype: `int _strlen(char *s);`

### 3-puts.c

This file contains a function that prints a string followed by a new line to stdout.
Prototype: `void _puts(char *str);`

### 4-print_rev.c

This file contains a function that prints a string in reverse followed by a new line.
Prototype: `void print_rev(char *s);`

### 5-rev_string.c

This file contains a function that reverses a string.
Prototype: `void rev_string(char *s);`

### 6-puts2.c

This file contains a function that prints every other character of a string, starting with the first character, followed by a new line.
Prototype: `void puts2(char *str);`

### 7-puts_half.c

This file contains a function that prints half of a string, followed by a new line.
Prototype: `void puts_half(char *str);`
Description: The function should print the second half of the string. If the number of characters is odd, it should print the last n characters of the string, where n = (length_of_the_string - 1) / 2.

### 8-print_array.c

This file contains a function that prints n elements of an array of integers, followed by a new line.
Prototype: `void print_array(int *a, int n);`
Description: The numbers must be separated by a comma and space and should be displayed in the same order as they are stored in the array.

### 9-strcpy.c

This file contains a function that copies the string pointed to by src to the buffer pointed to by dest, including the terminating null byte.
Prototype: `char *_strcpy(char *dest, char *src);`
Return value: the pointer to dest

### 100-atoi.c

This file contains a function that converts a string to an integer.
Prototype: `int _atoi(char *s);`
Description: The number in the string can be preceded by an infinite number of characters. It takes into account all the - and + signs before the number. If there are no numbers in the string, the function must return 0.
Restrictions: The use of long, declaring new variables of “type” array, and hard-coding special values is not allowed. The code will be compiled using the -fsanitize=signed-integer-overflow gcc flag.
