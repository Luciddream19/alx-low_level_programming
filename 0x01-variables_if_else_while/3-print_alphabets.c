#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * This function serves as the entry point for the program execution.
 * It prints alphabet in lowercase and then uppercase,
 * followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
char letter;

// Print lowercase alphabet
for (letter = 'a'; letter <= 'z'; letter++) {
putchar(letter)
}

// Print uppercase alphabet
for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
}    
putchar('\n');

return (0);
}
