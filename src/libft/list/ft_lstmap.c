#include "../../../inc/libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*result;
	void	*dummy;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		dummy = f(lst->content);
		if (dummy)
			result = ft_lstnew(dummy);
		if (!result || !dummy)
		{
			del(dummy);
			ft_lstclear(&new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, result);
		lst = lst->next;
	}
	return (new);
}
