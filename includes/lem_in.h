/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <mgonon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/30 19:07:36 by mgonon            #+#    #+#             */
/*   Updated: 2018/01/31 17:59:02 by mgonon           ###   ########.fr       */
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
    char	*name;
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



// typedef struct  s_room
// {
//     char	*name;
//     int     x;
//     int     y;
//     int     start;
//     int     end;
// 	s_room 	*next;
// 	s_tube  *link;
// }               t_room;

// typedef struct  s_link
// {
// 	t_room *room;
// 	t_link *next;
// }               t_link;


// while(t_room *room){
// 	printf("%s", room->name);
// 	while(room->link) {
// 		print("%s", room->link->room->name)
// 		room->link = room->link->next;
// 	}
// 	room = room->link->room;
// }