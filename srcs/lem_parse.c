/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_parse.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgonon <mgonon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/31 13:34:57 by mgonon            #+#    #+#             */
/*   Updated: 2018/01/31 17:15:24 by mgonon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/lem_in.h"

int get_ant_nb(void)
{
    char    *line;
    
    if (get_next_line(0, &line) < 0)
        return (-1);
    if (ft_atoi(line) <= 0 || line[0] == '-' || ft_strlen(line) > 10)
        return (-1);
    return (ft_atoi(line));
}

static int  skip_useless(char *line)
{
    if (line[0] == '#' && line[1] != '#')
        return (1);
    if (ft_strcmp(line, "##start") == 0)
        return (42);
    else if(ft_strcmp(line, "##start") == 0)
}

static int  parse_room(char *line, t_room *room)
{
	char	**split;
	int		ret;
	t_room	*n_room;

	split = ft_strsplit(line, ' ');
	ret = (ft_tablen(split) != 3);
	if (!ret && (split[0][0] == '#' || split[0][0] == 'L' ||
		(!ft_strisdigit(split[1]) || !ft_strisdigit(split[2]))))
		ret = 1;
	return (ret);

    if (line[0] == '#' || line[0] == 'L')
        return (0);
    room->x = ft_atoi(ft_strchr(line, ' '));
    room->y = ft_atoi(ft_strchr(line + ft_strlen(ft_strchr(line, ' ')) , ' '));
	printf("room->x = %d\n", room->x);
	printf("room->y = %d\n", room->y);
	ft_tabdel(&split);
    // if (ft_strlen(ft_strchr(line, ' ')) > 0)
}

static int  parse_state(char *line, t_room *room)
{
    int state;

    state = 0;
    if (line[0] == '#' && line[1] != '#')
        return (ISCOMMENT);
    if (ft_strcmp(line, "##start") == 0 && (state = ISBEGEND))
        room->start = 1;
    else if (ft_strcmp(line, "##end") == 0 && (state = ISBEGEND))
        room->end = 1;
    else if (parse_room(line, room) == ISROOM)
	 	state = ISROOM;
	else if (parse_room(line, room) == ISLINK)
		state = ISLINK;
    return (state);        
}

int get_rooms(void)
{
    char    *line;
    int     start;
    int     end;
    t_room  rooms[MAXROOM];

    while (get_next_line(0, &line) > 0)
    {

    }
}