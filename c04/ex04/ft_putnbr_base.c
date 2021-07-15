/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:30:51 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/10 19:02:20 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_valid_base(char *b)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (b[0] == '\0' || b[1] == '\0')
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == 43 || b[i] == 45)
			return (0);
		j = i + 1;
		while (b[j] != '\0')
		{
			if (b[i] == b[j] && i != j)
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

void	ft_switch_base(unsigned int nbr, unsigned int len_base, char *base)
{
	unsigned int	res;

	if (nbr < len_base)
		ft_putchar(base[nbr]);
	else
	{
		res = nbr % len_base;
		ft_switch_base(nbr / len_base, len_base, base);
		ft_putchar(base[res]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	len_base;
	unsigned int	k;

	len_base = ft_valid_base(base);
	k = 0;
	if (len_base == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		k = -nbr;
	}
	else
		k = nbr;
	ft_switch_base(k, len_base, base);
}
