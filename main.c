#include "libft.h"

int main()
{
    int count =0;
    t_list *head;
    t_list *last;
    t_list *a ,*b ,*c,*d;

    int int1 = 1;
    int int2 = 2;
    int int3 = 3;
    int int4 = 4;

    head = NULL;

    a = ft_lstnew(&int1);
    ft_lstadd_front(&head,a);

    b = ft_lstnew(&int2);
    ft_lstadd_front(&head,b);

    c = ft_lstnew(&int3);
    ft_lstadd_front(&head,c);

    d = ft_lstnew(&int4);
    ft_lstadd_back(&head,d);

    count = ft_lstsize(head);
    printf("Count = %d\n",count);
    print_list(head);
    printf("\n");
    last = ft_lstlast(head);
    printf("Last Element : %d\n",*((int *)last ->content));
    return 0;

}