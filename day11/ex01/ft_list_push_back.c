#include "ft_list.h"

void ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *linked_list;
    linked_list = *begin_list;
    if (*begin_list == NULL)
        {
        *begin_list = ft_create_elem(data);
        return;
        }
    while (linked_list->next != NULL)
        linked_list = linked_list->next;
    linked_list->next = ft_create_elem(data);
}
