/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oairola <oairola@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:11:39 by oairola           #+#    #+#             */
/*   Updated: 2021/12/02 09:22:59 by oairola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	unsigned char	*array;
	size_t			a;

	a = 0;
	array = malloc(size + 1);
	if (array == NULL)
		return (NULL);
	while (a != size)
	{
		array[a] = '\0';
		a++;
	}
	array[a] = '\0';
	return ((char *)array);
}
