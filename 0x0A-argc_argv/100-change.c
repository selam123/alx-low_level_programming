#include <stdlib.h>
#include <stdio.h>

/*
 * removed as too many functions
 * greater25 - reduces n by as many 25 cent coins as possible
 * @n: cents
 * Return: remainder of cents after coins deducted
 *
 *int greater25(int n)
 *{
 *	int r = (n / 25) * 25;
 *
 *	return (n - r);
 *}
 */
/**
 * greater10 - reduces n by as many 10 cent coins as possible
 * @n: cents
 * Return: remainder of cents after coins deducted
 */
int greater10(int n)
{
	int r = (n / 10) * 10;

	return (n - r);
}

/**
 * greater5 - reduces n by as many 5 cent coins as possible
 * @n: cents
 * Return: remainder of cents after coins deducd
 */
int greater5(int n)
{
	int r = (n / 5) * 5;

	return (n - r);
}

/**
 * greater2 - reduces n by as many 2 cent coins as possible
 * @n: cents
 * Return: remainder of cents after coins deducted
 */
int greater2(int n)
{
	int r = (n / 2) * 2;

	return (n - r);
}

/**
 * changemaker - calculates least number of coins required to make n
 * @c: the cents to be broken down into change
 * Return: the number of coins needed
 */
int changemaker(int c)
{
	int count, reduced;

	count = 0;
	while (c > 0 && c != 1)
	{
		if (c >= 25)
		{
			reduced = (c / 25) * 25;
			reduced = c - reduced;
			count = (c - reduced) / 25;
			c = reduced;
		}

		if (c >= 10)
		{
			reduced = greater10(c);
			count = count + ((c - reduced) / 10);
			c = reduced;
		}

		if (c >= 5)
		{
			reduced = greater5(c);
			count = count + ((c - reduced) / 5);
			c = reduced;
		}

		if (c >= 2)
		{
			reduced = greater2(c);
			count = count + ((c - reduced) / 2);
			c = reduced;
		}
	}

	if (c == 1)
		count = count + 1;

	return (count);
}

/**
 * main - takes an integer input and finds least number of coins to reach total
 * @argc: number of arguments passed in
 * @argv: an array of strings (the arguments)
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[argc - 1]);

	printf("%d\n", changemaker(cents));
	return (0);
}
