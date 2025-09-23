/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@example.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 15:50:10 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/23 16:59:40 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islowcase(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	ft_isupcase(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (ft_islowcase(c) || ft_isupcase(c));
}
