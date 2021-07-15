/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 20:09:40 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/12 13:05:19 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		diff;
	int		*range;
	int		i;

	diff = max - min;
	if (min >= max)
		return (NULL);
	range = (int *)malloc(sizeof(int) * diff);
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*int	main(void)
{
	int	*range;
	int	max;
	int	min;
	int	i;

	min = 2;
	max = 7;
	range = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d", range[i]);
		i++;
	}
	free(range);
	return (0);
}*/
