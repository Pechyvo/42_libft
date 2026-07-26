/* anonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymous** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anonymous<anonymous@example.com         > +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:49:40 by anonymous         #+#    #+#             */
/*   Updated: 2023/12/04 14:09:05 by anonymous        ###   ########.fr       */
/*                                                                            */
/* anonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymousanonymous** */

#include "libft.h"

static size_t	ft_wordcount(char const *s, char c)
{
	size_t	count;
	size_t	i;

	if (s == NULL)
		return (0);
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	**ft_freemem(char **list)
{
	int	i;

	i = 0;
	while (list[i])
	{
		free(list[i]);
		i++;
	}
	free(list);
	return (NULL);
}

static char	**ft_split_2(char const *s, char c, char **list)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			list[i] = ft_substr(s, 0, len);
			if (list[i++] == NULL)
				return (ft_freemem(list));
			s += len;
		}
	}
	list[i] = NULL;
	return (list);
}

char	**ft_split(char const *s, char c)
{
	char	**list;

	list = (char **)malloc((ft_wordcount(s, c) + 1) * sizeof(char *));
	if (list == NULL || s == NULL)
		return (NULL);
	list = ft_split_2(s, c, list);
	return (list);
}
