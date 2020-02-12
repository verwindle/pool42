#include "ft_list.h"

void ft_list_push_front(t_list **begin_list, void *data)
{
    t_list *linked_list;
    linked_list->next = *begin_list;
    if (*begin_list == NULL)
        {
        *begin_list = ft_create_elem(data);
        return;
        }
    linked_list = ft_create_elem(data);
}
