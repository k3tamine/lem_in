/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <mgonon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 19:07:36 by mgonon            #+#    #+#             */
/*   Updated: 2018/01/31 15:35:26 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H
# define MAXROOM	200
# define ISROOM		42
# define ISLINK		43
# define ISCOMMENT	44
# define ISBEGEND	45
# include "../libft/libft.h"

typedef struct  s_room
{
    int     nb;
    int     x;
    int     y;
    int     start;
    int     end;
    char    *link;
}               t_room;

int 	get_ant_nb(void);
void    lem_exit(char *errmsg);


// typedef struct  s_map
// {
//     int     antNb;
//     t_room  room;
// }               t_map;

#endif