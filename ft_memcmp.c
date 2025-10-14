/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:21:24 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/14 22:21:24 by abait-el         ###   ########.fr       */
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
			break ;
		i++;
	}
	return ((*(unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
}
