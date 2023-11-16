#include <stdio.h>
/**
 * before_main - Prints message before main function
 * Return: 0
 */
void before_main(void) __attribute__((constructor));
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
