/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oairola <oairola@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 11:15:34 by oairola           #+#    #+#             */
/*   Updated: 2021/11/25 10:10:28 by oairola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len_needle;
	size_t	start;
	int		start_save;
	size_t	i;

	start = 0;
	len_needle = ft_strlen(needle);
	if (len_needle == 0)
		return ((char *)haystack);
	while (haystack[start] != '\0')
	{
		i = 0;
		start_save = start;
		while (haystack[start + i] == needle[i])
		{
			i++;
			if (i == len_needle)
				return ((char *)&haystack[start_save]);
		}
		start++;
	}
	return (NULL);
}
