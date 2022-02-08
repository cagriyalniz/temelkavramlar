#include <stdio.h>


int con(const int x)
{
//	x = x*10;
	return (x);
}

int	main()
{
	int i = 0;
	const int *k;
	int *l;
	const int *kk;
	int *ll;

	kk = &i;
	ll = &i;
	
	
	while(i < 2)
	{
		k = &i;
		l = &i;
		printf("i: %d \n", i);
		printf("k: %d \n", *k);
		printf("l: %d \n", *l);
		printf("kk: %d \n", *kk);
		printf("ll: %d \n", *ll);
		printf("*** \n");
	   i++;	
	   k++;
	   l++;
	}


	int x = con(10);

	printf("%d", x);
}
