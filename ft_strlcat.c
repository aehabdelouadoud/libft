/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:19:44 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/16 21:34:17 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	dst += ft_strlen(dst);
	i = dstlen;
	while (i < (size_t)(dst - (dstlen + 1)))
	{
		dst[i] = src[i - dstlen];
		i++;
	}
	dst[i] = '\0';
	return (0);
} */
