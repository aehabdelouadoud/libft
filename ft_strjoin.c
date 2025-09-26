/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@example.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/26 01:47:36 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/26 15:46:14 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	total_size;

	res_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	res = (char *)malloc(res_size);
	if (!res)
	{
		return (NULL);
	}
	s[0] = '\0';
	ft_strlcat(res, s1, res_size);
	ft_strlcat(res, s2, res_size);
	return (res);
}
