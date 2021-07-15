/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 11:27:29 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/28 11:44:39 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

void	ft_ultimate_ft(int *********nbr);

int		main (void)
{
	int *********p_nbr9;
	int ********p_nbr8;
	int *******p_nbr7;
	int ******p_nbr6;
	int *****p_nbr5;
	int ****p_nbr4;
	int ***p_nbr3;
	int **p_nbr2;
	int *p_nbr1;
	int nbr;

	nbr = 2;
	p_nbr1 = &nbr; //pointer to int and take the address of 'nbr' as &nbr
	p_nbr2 = &p_nbr1; //pointer to a pointer
	p_nbr3 = &p_nbr2;
	p_nbr4 = &p_nbr3;
	p_nbr5 = &p_nbr4;
	p_nbr6 = &p_nbr5;
	p_nbr7 = &p_nbr6;
	p_nbr8 = &p_nbr7;
	p_nbr9 = &p_nbr8;

	printf("%d\n", nbr); //return declared number
	ft_ultimate_ft(p_nbr9);
	printf("%d\n", nbr); //return the variable pointed by the last pointer and modify its value
	return (0);
}
