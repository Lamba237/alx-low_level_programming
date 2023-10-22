#include <stdio.h>

void call_before_main(void) __attribute__((constructor));
/**
 * call_before_main - this function is called before
 * main is called
 * Return: nothing
 */
void call_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
