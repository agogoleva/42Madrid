/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 13:35:16 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/28 13:47:03 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a  = 10;
	int b  = 2;
	int div; //declate as pointer
	int mod; //declare as pointer

	ft_div_mod(a, b, &div, &mod);//send all values of the variables
	
	printf("Value of a is %d and b is %d, where a/b is %d and the reminder is %d\n", a, b, div, mod);//print pointer to the values
}
