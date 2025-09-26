/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@example.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 13:09:03 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/25 20:19:38 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < (n - 1))
	{
		if ((*(unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			break;
		i++;
	}
	return ((*(unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
