/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_exit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <mgonon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 13:46:11 by mgonon            #+#    #+#             */
/*   Updated: 2018/01/31 13:56:22 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

void    lem_exit(char *errmsg)
{
    ft_putstr_fd(errmsg, 2);
    //CLEAR MEMORY?
    exit(1);
}