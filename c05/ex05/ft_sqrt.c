/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 16:44:34 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/09 12:00:18 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb <= 0 || nb > 2147395600)
		return (0);
	if (nb == 1)
		return (1);
	sqrt = 1;
	if (nb > 1)
		while (nb > sqrt * sqrt)
			sqrt++;
	if (nb == ft_recursive_power(sqrt, 2))
		return (sqrt);
	else
		return (0);
}

/*int	main(void)
{
	int	output;

	output = ft_sqrt(49);
	printf("%d\n", output);
	return (0);
}*/
