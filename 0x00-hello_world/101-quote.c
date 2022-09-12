#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return 1 always
 */
int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, sentence, 59);
	return (1);
}
