/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 14:37:28 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/10 11:16:03 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	out;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	out = nb;
	while (power > 1)
	{
		out = nb * out;
		power--;
	}
	return (out);
}

/*int	main(void)
{
	int	output;

	output = ft_iterative_power(-2, 1);
	printf("%d\n", output);
	return (0);
}*/
