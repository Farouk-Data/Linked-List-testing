#include "libft.h"
#include <string.h>

/*problem assigning strings */
int main(void)
{
    int count = 0;
    char a[] = "first";
    char b[] = "second";
    char c[] = "third";
    char d[] = "forth";
    char e[] = "last";

    t_list *first , *second, *third, *forth, *last;
    t_list  *head;
    t_list  *get_last;

    head = NULL;
    first = ft_lstnew(a);
    ft_lstadd_front(&head,first);
    //printf("%s \n",head -> content);

    second = ft_lstnew(b);
    ft_lstadd_back(&head,second);
//printf("hi im here\n");
    third = ft_lstnew(c);
    ft_lstadd_back(&head,third);
//printf("hi im here\n")
    forth = ft_lstnew(d);
    ft_lstadd_back(&head,forth);
//printf("hi im here\n");
    last = ft_lstnew(e);
    ft_lstadd_back(&head,forth);
//printf("hi im here\n");
    get_last = ft_lstlast(head);
    count = ft_lstsize(head);
    //print_list(head);
    printf("Size of list : %d \n",count);
    //printf("Last Element is : %s\n",get_last -> content);
    return (0);
}