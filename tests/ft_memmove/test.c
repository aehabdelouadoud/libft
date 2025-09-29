/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abait-el <abait-el@example.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 20:58:48 by abait-el          #+#    #+#             */
/*   Updated: 2025/09/25 20:58:54 by abait-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"
#include "../../ft_putnbr_fd.c"

int	main(int argc, char *argv[])
{
	(void)argc;
	ft_putnbr_fd(atoi(argv[1]), 1);
	ft_putchar_fd('\n', 1);
}
