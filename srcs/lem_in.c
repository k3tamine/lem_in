/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <mgonon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 17:37:18 by mgonon            #+#    #+#             */
/*   Updated: 2018/01/31 14:00:01 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int	main(void)
{
	int		ant_nb;
	// char	*line;

	if ((ant_nb = get_ant_nb()) == -1)
		lem_exit("Wrong ant number\n");
	printf("ant_nb = %d\n", ant_nb);
	return (0);
}
