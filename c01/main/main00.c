/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:54:16 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/28 11:24:13 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ft(int *nbr);

int	main(void)
{
	int	a;

	a = 2;
	printf("before ft: %d\n", a); //return value of a
	ft_ft(&a);
	printf("after ft: %d\n", a); //return new value of a assigned with a pointer as int
	return (0);
}
