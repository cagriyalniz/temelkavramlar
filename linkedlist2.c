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

void	ekle(node *r, int x)
{
	while(r->next!=NULL)
	{
		r = r->next;
	}
		r->next = (node*)malloc(sizeof(node));
		r->next->x = x;
		r->next->next = NULL;
}
int	main()
{
	node * root; //bir tane root olusturuldu. root: kök dizin/kök göstericisi
	//node*root
	
	root = (node *)malloc(sizeof(node));//rootun gosterdigi ilk kutu olusturma. malloc void/tipsiz dondurur. o yuzden node'a cast ediliyor
	//node *root->[][next]
	root->next = NULL;	
	root->x = 10; //rootun ilk gosterdigi elemanin datasina 10 eklenir
	//node *root->[10][next]
	


	int i = 0;
	while(i<5)
	{
		ekle(root, i*10);
		i++;
	}
	bastir(root);
}
