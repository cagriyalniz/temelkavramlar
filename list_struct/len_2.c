#include <stdio.h>
#include <stdlib.h>

typedef struct t_list{
    int nmbr;
    struct t_list *next;
} s_list;

int ft_list_len_one_point(s_list *lst){
    int len = 0;
    while(lst){
        len++;
        lst = lst->next;
    }
    return len;
}
int main()
{
    s_list a;
    s_list b;
    s_list c;
    s_list d;

    a.nmbr = 0;
    b.nmbr = 1;
    c.nmbr = 2;
    d.nmbr = 3;
    
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = NULL;
    
    printf("%d\n", ft_list_len_one_point(&a));
    printf("%d\n", a.nmbr);
}
