#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return 1 always
 */
int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, sentence, sizeof(sentence));
	return (1);
}
