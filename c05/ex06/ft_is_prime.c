/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:34:17 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/10 13:27:55 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = nb / 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (i > 1)
		{
			if (nb % i == 0)
				return (0);
			i--;
		}
		return (1);
	}
}

/*int	main(void)
{
	printf("Is prime yes=1 || no=0: %d\n", ft_is_prime(2147483647));
	return (0);
}*/
