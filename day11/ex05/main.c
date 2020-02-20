#include <stdio.h>
#include <string.h>
#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av);

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

int main(int argc, char** argv)
{
	if (argc < 1)
		return 1;
	t_list* my_list = ft_list_push_params(argc, argv);
	
	for (t_list* iter = my_list; iter != 0; iter = iter->next)
		printf("%s\n", (char*)iter->data);

	return 0;
}