#include <stdio.h>

/**
 * main- print name of program
 * @argc: argument count
 * @argv: argument vector
 *
 * Description: print name of program, followed by a new line
 *
 * Return: 0 is success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
