#include <stdio.h>

void yazdir(char *dest)
{
int i = 0;	
	while (*dest)
	{
		printf("%c", *dest);
		dest++;
	}
	
	printf("\n ************** \n");
//	while (dest[i] != '\0')
//	{
//		printf("%c", dest[i]);
//		i++;
//	}
}

int	main()
{
	char *dest = "ali";
	yazdir(dest);
}
