#include <stdio.h>

int	main()
{
	int *i;
	printf("%p \n", i);
	i++;
	printf("%p \n", i);
	printf("**********\n");
	char *cp;
	char c = 'c';
	cp = &c;
	printf("c0 %c \n", c);
	printf("c1 %p \n", cp);
	printf("c2 %s \n", cp);
	cp++;
	char cnew = 'n';
	cp = &cnew;
	printf("cp++: \n");
	printf("c3 %p \n", cp);
	printf("c4 %s \n", cp);
	
	printf(" --------- \n");
	cp--;
	printf("c5 %p \n", cp);
	printf("c6 %s \n", cp);
	
	printf("*-*-*-*-*-*-*-* \n");
	int x = 0;
	char *src = "src";
/*	printf("%c \n", *src);
	printf("%s \n", src);
	src++;
	printf("%c \n", *src);
	printf("%s \n", src);
*/	printf("while1: \n");
	while(*src)
	{
		printf("%c \n", *src);
		src++;
	}
	printf("while1: \n");
	char *src2 = "src2";
	char dest[] = "dest";
   int index = 0;	
	while (src2[index] != '\0')
	{
	//	printf("%s \n", src2); src2++ deyince artıyor
	/*	dest = src2; src: bos| src2: bos| dest: bos
		dest++;
		src2++;*/
		printf("%c", src2[index]);
		dest[index] = src2[index]; // dest yukarıda pointer olarak tanımlandığında bus error veriyor
		index++;

	}
	dest[index] = '\0';

	printf("src: %s \n", src);
	printf("src2: %s \n", src2);
	printf("dest: %s \n", dest);

/*	while ( x < 10)
	{	

		printf("adres: %p \n", cp);
		cp++;
		x++;
	}
*/


	printf("pointerın gosterdigi yeri degistirme*********** \n");

	int a = 5;
	int b = 3;
	int *pa = &a;
	printf("a: %d\n", a);
	printf("anın adresi pa: %p\n ", pa); 
	printf("anın adresi &a: %p\n", &a);
	*pa = b;
	printf("a: %d \n", a);
	printf("değişine a nın adresi pa: %p -- &a: %p", pa, &a);
}
