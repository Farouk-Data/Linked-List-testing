#include "libft.h"

void print_list(t_list *head)
{
   t_list *tmp;

    tmp = head;
    
    while (tmp)
    {
        int *num = (int *)tmp -> content;
        printf("%d ",*num);
        if (tmp -> next != NULL)
            printf("->");
        tmp = tmp -> next;
    }
}