/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 17:28:32 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/28 17:37:42 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int i = 20;
	int j = 7;
	int *a = &i;
	int *b = &j;

	printf("value of a is %d, value of b is %d\n", i, j);
	ft_ultimate_div_mod(a, b);
	
	printf("a/b: the resulting division is: %d (at *a)  and the reminder is: %d (at *b)\n", *a, *b);
}
