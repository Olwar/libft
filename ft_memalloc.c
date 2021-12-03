/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oairola <oairola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 13:49:01 by oairola           #+#    #+#             */
/*   Updated: 2021/12/03 11:25:44 by oairola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	unsigned char	*i;
	size_t			a;

	if (size > 16711568)
		return (NULL);
	a = 0;
	i = malloc(size);
	if (i == NULL)
		return (NULL);
	while (a != size)
	{
		i[a] = 0;
		a++;
	}
	i = (void *)i;
	return (i);
}
