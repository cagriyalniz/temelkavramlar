#include <stdio.h>
#include <stdlib.h>

typedef struct t_list{
	int nmbr;
	struct t_list *next;
}s_list;

void ft_increase_one_point_head_in(s_list *lst){
    printf("ft_increase_on_pointer_head_in value: %d \n", lst->nmbr);
    s_list *head = lst;
    while(head){
        head->nmbr++;
        head = head->next;
    }
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
   
    ft_increase_one_point_head_in(w);
    printf("w: %d", w->nmbr);

    return 0;
}
