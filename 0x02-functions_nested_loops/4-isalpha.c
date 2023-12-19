#include "main.h"

/**
* _isalpha - check for alphapetic characters
* Return: 0
*/

int _isalpha(int c) {
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122)) {
return (1);
} else {
return (0);
}
}
