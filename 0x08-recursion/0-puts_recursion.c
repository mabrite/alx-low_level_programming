#include <stdio.h>

void _puts_recursion(char *s) {
    if (*s == '\0'); 
    {
        /* Base case: end of the string, print new line
        putchar('\n');
        return;
    }

    * Print the current character
    putchar(*s);

    * Recursive call with the next character
    _puts_recursion(s + 1);
}

int main() {
    char str[] = "Hello, World!";
    _puts_recursion(str);
    return 0;
}
