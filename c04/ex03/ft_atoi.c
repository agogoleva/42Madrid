/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:49:57 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/07 10:27:23 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	n_45;
	int	count;
	int	sign;

	i = 0;
	n_45 = 0;
	sign = 1;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	while (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			n_45++;
		i++;
	}
	if (n_45 % 2 != 0)
		sign = -1;
	count = 0;
	while (str[i] >= 48 && str[i] <= 57)
	{
		count = (count * 10) + (str[i] - 48);
		i++;
	}
	return (sign * count);
}
