/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 16:44:19 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/21 16:58:53 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strnstr(char *haystack, char *needle, unsigned int len)
{
	int	i;
	int	j;

	i = 0;
	while (haystack[i])
	{
		j = 0;
		while (*(needle + j) == *(haystack + i + j))
			j++;
		if (!*(needle + j))
			return (haystack + i);
		i++;
	}
	return ((void *)0);
}
