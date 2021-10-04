#include "libft.h"

void	ft_lstdel_all(t_list *alst)
{
	t_list	*tmp;

	if (!alst)
		return ;
	while (alst != NULL)
	{
		tmp = alst;
		alst = alst->next;
		free(tmp);
	}
	free(alst);
}
