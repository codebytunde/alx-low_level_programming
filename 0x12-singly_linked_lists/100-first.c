#include <stdio.h>

void __attribute__((constructor)) pre_main_message(void);

/**
 * pre_main_message - prints predefined messages before main function.
 */
void pre_main_message(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * main - The main function where the program execution starts.
 *
 * Return: 0 upon success.
 */

int main(void)
{
	pre_main_message();
	return (0);
}


