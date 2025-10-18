/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:19:36 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/18 14:46:02 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_sstrlen(const char *s, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size && s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t srclen;
	size_t dstlen;

	srclen = ft_strlen(src);
	dstlen = ft_sstrlen(dst, dstsize);
	if (dstsize == dstlen)
		return (dstsize + srclen);
	i = 0;
	while (i < (dstsize - 1 - dstlen))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}
