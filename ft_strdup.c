/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@example.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 15:31:53 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/26 15:35:12 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*res;

	size = ft_strlen(s) + 1;
	res = (char *)malloc(sizeof(char) * size);
	if (!res)
	{
		return (NULL);
	}
	ft_memcpy(res, s, size);
	return (res);
}
