#include <stdio.h>
#include <string.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list);

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = malloc(sizeof(t_list));
    if (elem != NULL)
	    {
		elem->data = data;
		elem->next = NULL;
		}
	return (elem);
}

int main()
{
	t_list* my_list = 0;
	ft_list_clear(&my_list);
	printf("clear: %p\n", my_list);
	my_list = ft_create_elem("asdf");
	printf("%p\n", my_list);
	ft_list_clear(&my_list);
	printf("clear: %p\n", my_list);
	my_list = ft_create_elem("asdf");
	printf("%p\n", my_list);
	my_list->next = ft_create_elem("qwer");
	ft_list_clear(&my_list);
	printf("clear: %p\n", my_list);

	return 0;
}