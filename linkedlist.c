#include <stdio.h>
#include <stdlib.h>

typedef struct n{
	int x;
	struct n *next;
} node;

void bastir(node *r)
{
	while(r!= NULL)
	{
		printf("%d ", r->x);
		r=r->next;
	}
}

int	main()
{
	node * root; //bir tane root olusturuldu. root: kök dizin/kök göstericisi
	//node*root
	
	root = (node *)malloc(sizeof(node));//rootun gosterdigi ilk kutu olusturma. malloc void/tipsiz dondurur. o yuzden node'a cast ediliyor
	//node *root->[][next]
	
	root->x = 10; //rootun ilk gosterdigi elemanin datasina 10 eklenir
	//node *root->[10][next]
	
	root->next = (node *)malloc(sizeof(node)); //rootun gosterdigi elemanin(nexti) yeni bir elemani gosterir. yeni eleman olusturma
	//node *root -->[10][next] -->[][next];
	
	root->next->x = 20; //rootun nextinin x degeri= 20. rootun gosterdigi elemanin nextinin gosterdigi eleman 20 oldu. 
	// node *root --> [10][next] --> [20][next]
	
	root->next->next = (node *)malloc(sizeof(node));
	root->next->next-> x = 30;

	root->next->next->next = NULL; // son elemanin null'ı gostermesi gerekiyor. son elemanin gosterdigi yerin null oldugu belirtilmezse baska bir yeri gosterebilir(?)/null gostermeyebilir
	
	node *iter;
	iter = root;
	printf("%d \n", iter->x);
	iter = iter->next;
	printf("%d \n", iter->x);

	printf("\n ----linkedlistin sonuna eleman ekleme----\n");
	iter = root;
	int i = 0;
/*	while (iter != NULL)
	{
		i++;
		printf("%dinci elaman:(iter->x) %d \n", i, iter->x);
		iter = iter -> next;
	}
	i = 0;*/
	while (iter->next !=NULL)
	{
		i++;
		printf("%dinci elaman:(iter->x) %d \n", i, iter->x);
		iter = iter -> next;

	}
	i = 0;
	while(i<5)
	{
		iter->next = (node *)malloc(sizeof(node));
		iter = iter->next;
		iter->x = i*10;
		iter->next = NULL;
		i++;
	}
	bastir(root);
}
