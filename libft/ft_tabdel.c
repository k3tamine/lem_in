/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <mgonon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 17:12:21 by mgonon            #+#    #+#             */
/*   Updated: 2018/01/31 17:12:57 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabdel(char ***tab)
{
	char	**del;
	int		i;

	if (!tab || !*tab)
		return ;
	del = *tab;
	i = 0;
	while (del[i])
	{
		ft_strdel(&del[i]);
		++i;
	}
	free(*tab);
	*tab = NULL;
}