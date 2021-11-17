#include "libft.h"

void    ft_lstadd_back(t_list **head, t_list *new)
{
    t_list  *last;

    last = *head;
    while (last -> next != NULL)
    {
        last = last -> next; 
    }
    last -> next = new;
    //new -> next = NULL;
}