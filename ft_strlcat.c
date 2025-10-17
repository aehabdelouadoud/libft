/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 22:19:44 by abait-el          #+#    #+#             */
/*   Updated: 2025/10/17 17:31:33 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;

	dstlen = ft_strlen(dst);
	dst += ft_strlen(dst);
	i = dstlen;
	while (i < (dstsize - (dstlen + 1)))
	{
		dst[i] = src[i - dstlen];
		i++;
	}
	dst[i] = '\0';
	return (dstlen + ft_strlen(src));
}


#include <stdio.h>
#include "libft.h"

int main(void)
{
    char dst[20] = "Hello";
    const char *src = " World!";
    size_t ret;

    ret = ft_strlcat(dst, src, sizeof(dst));

    printf("Resulting string : \"%s\"\n", dst);
    printf("Returned length  : %zu\n", ret);

    return 0;
}
