/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 12:55:11 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/28 13:25:16 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	int a = 42;
	int b = 17;
	
	printf("before ft: a = (%p)  %d b = (%p) %d\n", &a,  a, &b, b);
	ft_swap(&a, &b); // give the function pointers to our variables
	printf("after ft: a = (%p) %d b = (%p) %d\n", &a, a, &b, b);

}
