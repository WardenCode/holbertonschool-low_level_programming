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
	char str1[35] = "and that piece of art is useful\" ";
	char str2[28] = "- Dora Korpar, 2015-10-19\n";
	fprintf(stderr, "%s%s", str1, str2);
	return (1);
}
