#include <stdio.h>
#include <stdlib.h>
typedef struct t_list{
	int nmbr;
	struct t_list *next;
}s_list;

int ft_len_dbl_pointer(s_list **a){
    int len = 0;
   
    while((*a)){
        len++;
        *a = (*a)->next;
    }
    return len;
}

int main()
{
    
    s_list *w = (s_list*)malloc(sizeof(s_list));
    s_list *x= (s_list*)malloc(sizeof(s_list));
    s_list *y= (s_list*)malloc(sizeof(s_list));
    s_list *z= (s_list*)malloc(sizeof(s_list));
    w->nmbr = 0;
    x->nmbr = 1;
    y->nmbr = 2;
    z->nmbr = 3;
    w->next = x;
    x->next = y;
    y->next = z;
    z->next = NULL;
	s_list *head = w;
    printf("%d \n", ft_len_dbl_pointer(&head));
    printf("w: %d \n", w->nmbr);
}
