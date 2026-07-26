/* anonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymous** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous<anonymous@example.com         > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:04:47 by anonymous         #+#    #+#             */
/*   Updated: 2023/11/22 13:36:27 by anonymous        ###   ########.fr       */
/*                                                                            */
/* anonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymous** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return (&((char *)s)[i]);
		i--;
	}
	return (NULL);
}
