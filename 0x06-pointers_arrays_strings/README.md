<p dir="auto">
This is for the description of each file in this directory.
any file that is not mentioned here is for testing purposes.
##the main.h and _putchar.c files are essential for all the directories in this repositry
###sorry for not saying that earlier.
Let us start:</p>
<p dir="auto">0-strcat.c &gt; is a source code of a function that concatenates two strings.</p>
<ul dir="auto">
<li>Prototype: char *_strcat(char *dest, char *src);</li>
<li>This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte</li>
<li>Returns a pointer to the resulting string dest</li>
</ul>
<p dir="auto">1-strncat.c &gt; is a source code of a function that concatenates two strings.</p>
<ul dir="auto">
<li>Prototype: char *_strncat(char *dest, char *src, int n);</li>
<li>The _strncat function is similar to the _strcat function, except that
-- it will use at most n bytes from src; and
-- src does not need to be null-terminated if it contains n or more bytes</li>
<li>Return a pointer to the resulting string dest</li>
</ul>
<p dir="auto">2-strncpy.c &gt; is a source code of a function that copies a string.</p>
<ul dir="auto">
<li>Prototype: char *_strncpy(char *dest, char *src, int n);</li>
<li>Your function should work exactly like strncpy ( a similar function in The standard library)</li>
</ul>
<p dir="auto">3-strcmp.c &gt; is a source code of a function that compares two strings.</p>
<ul dir="auto">
<li>Prototype: int _strcmp(char *s1, char *s2);</li>
<li>Your function should work exactly like strcmp</li>
</ul>
<p dir="auto">4-rev_array.c &gt; is a source code of a function that reverses the content of an array of integers.</p>
<ul dir="auto">
<li>Prototype: void reverse_array(int *a, int n);</li>
<li>Where n is the number of elements of the array</li>
</ul>
<p dir="auto">5-string_toupper.c &gt; is a source code of a function that changes all lowercase letters of a string to uppercase.</p>
<ul dir="auto">
<li>Prototype: char *string_toupper(char *);</li>
</ul>
<p dir="auto">6-cap_string.c &gt; is a source code of a function that capitalizes all words of a string.</p>
<ul dir="auto">
<li>Prototype: char *cap_string(char *);</li>
<li>Separators of words: space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and }</li>
</ul>
<p dir="auto">7-leet.c &gt; is a source code of a function that encodes a string into 1337.</p>
<ul dir="auto">
<li>Letters a and A should be replaced by 4</li>
<li>Letters e and E should be replaced by 3</li>
<li>Letters o and O should be replaced by 0</li>
<li>Letters t and T should be replaced by 7</li>
<li>Letters l and L should be replaced by 1</li>
<li>Prototype: char *leet(char *);</li>
<li>You can only use one if in your code</li>
<li>You can only use two loops in your code</li>
<li>You are not allowed to use switch</li>
<li>You are not allowed to use any ternary operation</li>
</ul>
<p dir="auto">100-rot13.c &gt; is a source code of a function that encodes a string using rot13.</p>
<ul dir="auto">
<li>Prototype: char *rot13(char *);</li>
<li>You can only use if statement once in your code</li>
<li>You can only use two loops in your code</li>
<li>You are not allowed to use switch</li>
<li>You are not allowed to use any ternary operation</li>
</ul>
<p dir="auto">101-print_number.c &gt; is a source code file of a function that prints an integer.</p>
<ul dir="auto">
<li>Prototype: void print_number(int n);</li>
<li>You can only use _putchar function to print</li>
<li>You are not allowed to use long</li>
<li>You are not allowed to use arrays or pointers</li>
<li>You are not allowed to hard-code special values</li>
</ul>
<p dir="auto">102-magic.c &gt; is is a source code of a program that demostrate how we can manipulate data in memory with pointers and addresses in a indirect way.</p>