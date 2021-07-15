/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/08 10:29:31 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/08 14:19:32 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	out;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		out = nb;
		while (nb > 1)
		{
			nb = nb - 1;
			out = nb * out;
		}
		return (out);
	}
}

/*int	main(void)
{
	int	output;

	output = ft_iterative_factorial(0);
	printf("%d\n", output);
	return (0);
}*/
