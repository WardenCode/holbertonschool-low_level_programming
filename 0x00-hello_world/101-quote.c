#include <stdio.h>
/**
 * main - prints an error message
 *
 * Description: Prints an error message:
 * "and that piece of art is useful\" - Dora Korpar, 2015-10-19".
 *
 * Return: Always return 1
 */
int main(void)
{
	char quote[60] = "and that piece of art is useful\" \
- Dora Korpar, 2015-10-19";
	fprintf(stderr, "%s\n", quote);
	return (1);
}
