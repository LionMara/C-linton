#include <stdio.h>

/*
 * printing_excape_sequences.c
 * by Lion
 *
 * created on 2023/02/20
 */

/**
 * main -  main
 *
 * return: 0
 */

int main(void)
{
	printf("Hello, world without a new line");
	printf("Helo, world with a new line\n");
	printf("A string with \"quoted text\" inside of it\n\n");
	printf("Tabbed\tColumn\tHeadings\n");
	printf("The \tquick\tbrown\n");
	printf("fox\tjumps\tover\n");
	printf("the\tlazi\tdog.\n\n");
	printf("A line of text that\nspans three lines\nand completes the line\n\n");

	return (0);
}
