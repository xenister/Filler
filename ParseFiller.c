/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ParseFiller.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susivagn <susivagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/18 18:21:39 by susivagn          #+#    #+#             */
/*   Updated: 2017/11/13 16:14:18 by susivagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./filler.h"

int     main ()
{
    int     fdr = open("./patate", O_CREAT | O_RDWR | O_TRUNC, 0666);
    char    *line;
    int     i;
    t_info  *info;

    info = ft_memalloc(sizeof(t_info), '\0');
    info->player = 0;
    info->piece = NULL;
    info->board = NULL;
    line = NULL;
    ft_filler_read(fdr, info);
    printf("8 2\n");
    return (0);
}