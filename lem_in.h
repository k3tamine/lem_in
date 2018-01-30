/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <mgonon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 19:07:36 by mgonon            #+#    #+#             */
/*   Updated: 2018/01/30 20:40:14 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# include "libft/libft.h"

typedef struct  s_room
{
    int     nb;
    int     x;
    int     y;
    int     start;
    int     end;
    char    *link;
}               t_room;



// typedef struct  s_map
// {
//     int     antNb;
//     t_room  room;
// }               t_map;

#endif