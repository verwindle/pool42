#include <stdio.h>
#include <string.h>

#include "ft_list.h"

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
	t_list* my_list = NULL;
	ft_list_push_back(&my_list, "hello world!");
	ft_list_push_back(&my_list, "asdf");
	ft_list_push_back(&my_list, "qwer");

	for(t_list* iter = my_list; iter != NULL; iter = iter->next)
	    printf("%s\n", (char*)iter->data);

	return 0;
}