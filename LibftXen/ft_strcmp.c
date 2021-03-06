/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susivagn <susivagn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:57:36 by susivagn          #+#    #+#             */
/*   Updated: 2016/11/09 17:09:36 by susivagn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	c;

	c = 0;
	while (((UC*)s1)[c] == ((UC*)s2)[c] && ((UC*)s1)[c] && ((UC*)s2)[c])
		c++;
	return (((UC*)s1)[c] - ((UC*)s2)[c]);
}
