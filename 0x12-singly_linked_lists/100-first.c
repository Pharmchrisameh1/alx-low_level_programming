#include <stdio.h>

void hare(void) __attribute__((constructor));

/**
 * hare - run before main
 *
 */
void hare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
