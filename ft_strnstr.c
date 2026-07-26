/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous <anonymous@example.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/26 00:00:00 by anonymous         #+#    #+#             */
/*   Updated: 2026/07/26 00:00:00 by anonymous        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (needle[0] == '\0' || needle == NULL)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		n = 0;
		while (haystack[i + n] && needle[n]
			&& haystack[i + n] == needle[n] && i + n < len)
			n++;
		if (n == ft_strlen(needle))
			return ((char *)haystack + i);
		i++;
	}
	return (0);
}
