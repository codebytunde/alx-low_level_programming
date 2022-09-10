#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: checks on the last digit of the assigned var
 * Return: Always 0 (success)
 */
int main(void)
{
int n, num;

srand(time(0));
n = rand() - RAND_MAX / 2;
num = n % 10;
if (num > 5)
printf("Last digit of %d is %d and is greater than 5\n", num);
else if (num == 0)
printf("Last digit of %d is %d and is 0\n", num);
else if (num < 6 && m !0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", num);
return (0);
}
