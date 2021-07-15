/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:04:54 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/15 10:11:37 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	diff;
	int	*hold;
	int	i;

	diff = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	hold = (int *)malloc(sizeof(int) * diff);
	if (hold == NULL)
		return (-1);
	i = 0;
	while (min < max)
	{
		hold[i] = min;
		min++;
		i++;
	}
	*range = hold;
	return (i);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	i;
	int	size;
	int	*ptr;
	
	min = 7;
	max = 2;
	size = ft_ultimate_range(&ptr, min, max);
	i = 0;
	while (i < max - min)
	{
		printf("%d", ptr[i]);
		i++;
	}
	printf("\nsize of range: %d\n", size);
	free(ptr);
	return (0);
}*/
