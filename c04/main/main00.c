/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 15:38:16 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/06 10:12:08 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc == 2)
		i = ft_strlen(argv[1]);
	if (i < 10)
	{
		ft_putchar(i + 48);
		write(1, "\n", 1);
	}
	else if (i > 9 && i < 100)
	{
		ft_putchar(i / 10 + 48);
		ft_putchar(i % 10 + 48);
	}
/*	else if (i > 99)
	{
		ft_putchar(i / 100 + 48);
		ft_putchar(i / 10 + 48);
		ft_putchar(i % 10 + 48);
	}*/
	return (0);
}
