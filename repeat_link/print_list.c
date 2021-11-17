#include "libft.h"

void    print_list(t_list *head)
{
    while (head)
    {
        printf("%s ",head -> content);
        printf("->");
        head = head -> next;
    }
}