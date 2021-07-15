/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 12:01:03 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/05 13:26:58 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_num2char(int i, int j)
{
	char	i1;
	char	i2;
	char	j1;
	char	j2;

	i1 = i / 10 + 48;
	i2 = i % 10 + 48;
	j1 = j / 10 + 48;
	j2 = j % 10 + 48;
	write(1, &i1, 1);
	write(1, &i2, 1);
	write(1, " ", 1);
	write(1, &j1, 1);
	write(1, &j2, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j < 100)
		{
			ft_num2char(i, j);
			j++;
			if (i != 98)
				write(1, ", ", 2);
		}
		i++;
	}
}
