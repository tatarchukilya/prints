/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nblackie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 13:25:06 by nblackie          #+#    #+#             */
/*   Updated: 2019/09/11 13:01:16 by nblackie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *res;

	if (size + 1 == 0)
		return (NULL);
	if ((res = (char*)malloc(sizeof(char) * (size + 1))))
	{
		ft_bzero(res, size + 1);
		return (res);
	}
	return (NULL);
}
