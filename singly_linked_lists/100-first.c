#include <stdio.h>

/**
 * PreMainFunc - Prints a message before main is executed.
 *
 * This function is executed automatically before the main function
 * due to the constructor attribute.
 */
void __attribute__((constructor)) PreMainFunc(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
