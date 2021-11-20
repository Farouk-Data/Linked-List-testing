#include "libft.h"
#include <string.h>

void    *change(void *a)
{
    char *b = (char *)a;
    int i = -1;
    while (b[++i])
        b[i] = ft_toupper(b[i]);
    return ((char *)b);
}

int main()
{
    int count =0;
    t_list *head;
    t_list *last;
    t_list *a ,*b ,*c,*d;
    t_list  *new_list;

    // int int1 = 1;
    // int int2 = 2;
    // int int3 = 3;
    // int int4 = 4;

    head = NULL;
    char text[200] = "the answer to";
    char text4[200] = "the universe";
    char text3[200] = "and everything is"; 
    char text2[200] = "42";
    a = ft_lstnew(strdup(text));
    ft_lstadd_front(&head,a);

    b = ft_lstnew(strdup(text4));
    ft_lstadd_back(&head,b);

    c = ft_lstnew(strdup(text3));
    ft_lstadd_back(&head,c);

    d = ft_lstnew(strdup(text2));
    ft_lstadd_back(&head,d);

    count = ft_lstsize(head);
    printf("Count = %d\n",count);
    print_list(head);

    //ft_lstiter(head,&change);
    //printf("\n");
    last = ft_lstlast(head);
    //print_list(head)
    printf("\n");
    printf("Last Element : %s\n",((char *)last ->content));
    printf("Copy of the list : \n");
    new_list = ft_lstmap(head,change);
    print_list(new_list);
    printf("\ncheck original: \n");
    print_list(head);
    return 0;

}