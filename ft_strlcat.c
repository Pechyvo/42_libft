/* anonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymous** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous<anonymous@example.com         > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 12:57:05 by anonymous         #+#    #+#             */
/*   Updated: 2023/11/22 13:36:50 by anonymous        ###   ########.fr       */
/*                                                                            */
/* anonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymous** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	char	*temp;

	temp = (char *)src;
	i = 0;
	n = 0;
	while (i < dstsize && dst[i])
		i++;
	while ((i + n + 1) < dstsize && src[n])
	{
		dst[i + n] = src[n];
		n++;
	}
	if (i != dstsize)
	{
		dst[i + n] = '\0';
	}
	return (i + ft_strlen(temp));
}
