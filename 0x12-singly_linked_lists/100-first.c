#include <stdio.h>
/**
 * before_main - Prints message before main function
 * Return: 0
 */
void __attribute__((constructor)) before_main(void);

void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
/**
 * before_main - Prints message before main function
 * __attribute__((constructor)) before_main(void) - Prints message before main
 * Return: 0
 */
void __attribute__((constructor)) before_main(void)
{
	before_main();
}
