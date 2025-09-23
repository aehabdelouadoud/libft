/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <your@email.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 01:46:17 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/22 01:46:29 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static char const	*ft_strany(char const *s, char const *dels)
{
	int	seen[256];
	int	i;

	i = 0;
	while (i < 256)
	{
		*(seen + i) = 0;
	}
	while (*dels)
	{
		*(seen + (unsigned char)(*dels)) = 1;
		dels++;
	}
	while (*s)
	{
		if (*(seen + (unsigned char)(*s)))
			return (s);
		s++;
	}
	return (NULL);
}

static char const	*ft_strskip(char const *s, char const *dels, int rev)
{
	if (rev)
	{
		while (!ft_strany(s, dels))
		{
			s++;
		}
	}
	else
	{
		while (ft_strany(s, dels))
		{
			s++;
		}
	}
	return (s);
}

static unsigned int	ft_count_words(char const *s, char const *dels)
{
	int	count;

	count = 0;
	while (*s)
	{
		s = ft_strskip(s, dels, 0);
		if (ft_strskip(s, dels, 1) - s > 0)
		{
			count++;
		}
		s = ft_strskip(s, dels, 1);
	}
	return (count);
}

static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*((char *)dest + i) = *((char *)src + i);
		i++;
	}
	return (dest);
}

char	**ft_split(char const *s, char const *dels)
{
	char	**res;
	int		wi;
	int		substr_size;

	res = malloc(sizeof(char *) * (ft_count_words(s, dels) + 1));
	wi = 0;
	while (*s)
	{
		s = ft_strskip(s, dels, 0);
		substr_size = ft_strskip(s, dels, 1) - s;
		if (substr_size > 0)
		{
			res[wi] = malloc(substr_size + 1);
			ft_memcpy(res[wi], s, substr_size);
			res[wi][substr_size] = '\0';
			wi++;
		}
	}
	return (res);
}
