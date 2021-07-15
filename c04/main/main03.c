/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 18:49:50 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/06 15:11:31 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}*/

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
		i = ft_atoi(argv[1]);
//	ft_putnbr(i);
	printf("%d\n", i);
	write(1, "\n", 1);
}
