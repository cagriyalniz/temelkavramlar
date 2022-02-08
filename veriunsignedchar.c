#include <stdio.h>
int	main()
{
	char a = -48;
	unsigned char b = -48;
	signed char c = -48;
	printf("a: %c b: %c c: %c \n", a ,b, c);

	int d = -1;
	unsigned int e = -256;
	signed int f = -1;
	printf("d: %d e: %d f: %d \n", d, e, f);

	signed char g1 = 126;
	signed char g2 = -128;
	printf("g1: %d g2: %d \n", g1, g2);

	unsigned int h1 = -1;
	int h2 = h1;
	printf("h1: %d h2: %d", h1, h2);
}
