#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point of the program
 *
 * This function serves as the entry point for the program execution.
 * It generates a random number, determines whether it is greater than 5,
 * zero or less than 6 but not zero, and prints the last digit of the number.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
int n, last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;

last_digit = n % 10;
if (last_digit > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
}
else if (last_digit == 0)
{
printf("Last digit of %d is %d and is 0\n", n, last_digit);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_digit);
}

return (0);
}
