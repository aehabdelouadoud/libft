/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@example.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:47:18 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/26 15:47:19 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* static char	*ft_strncpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	while (*(src + i) && i < (dsize - 1))
	{
		*(dst + i) = *(src + i);
		i++;
	}
	*(dst + i) = '\0';
	return (dst);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dst_buff_size)
{
	size_t	dst_initial_size;
	size_t	src_size;

	dst_initial_size = ft_strlen(dst);
	src_size = ft_strlen(src);

	ft_strncpy(dst, src, dst_buff_size);

	if (ft_strlen(dst) != (dst_initial_size + src_size))
	{
		return (ft_strlen(dst));
	}
	return (dst_initial_size + src_size);
} */
