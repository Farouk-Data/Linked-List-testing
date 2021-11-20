#include "libft.h"

t_list  *ft_lstmap(t_list *lst , void *(*f)(void *))
{
    t_list  *new_head;
   /* t_list *new_element;

    //new_element = NULL;
    //new_head = NULL;
    while (lst)
    {
        new_element = ft_lstnew(lst -> content);

        ft_lstadd_back(&new_head,new_element);
        lst = lst -> next;
    }   */
    if (!lst)
        return (NULL);
    new_head = (t_list *)malloc(sizeof(t_list));
    /*if (!new_head)
        ft_lst*/
    new_head -> content = (f)(lst -> content);
    printf("%s \n",(char *)lst -> content);
    new_head -> next = ft_lstmap(lst -> next,(*f));

    return (new_head);
}