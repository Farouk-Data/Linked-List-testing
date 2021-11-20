#include "libft.h"

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
    char text[200] = "yahya";
    char text4[200] = "hello there";
    char text3[200] = "hohoo"; 
    char text2[200] = "tootooo";
    a = ft_lstnew(text);
    ft_lstadd_front(&head,a);

    b = ft_lstnew(text4);
    ft_lstadd_front(&head,b);

    c = ft_lstnew(text3);
    ft_lstadd_front(&head,c);

    d = ft_lstnew(text2);
    ft_lstadd_back(&head,d);

    count = ft_lstsize(head);
    printf("Count = %d\n",count);
    print_list(head);

    //ft_lstiter(head,&change);
    //printf("\n");
    last = ft_lstlast(head);
    //print_list(head);
    printf("\n");
    printf("Last Element : %s\n",((char *)last ->content));
    printf("Copy of the list : \n");
    new_list = ft_lstmap(head,&change);
    print_list(new_list);
    return 0;

}