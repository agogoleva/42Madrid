/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 17:30:09 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/06 12:45:18 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putnbr(int nb);

int	main(int argc, char *argv[])
{
	int	num = atoi(argv[1]);

	if (argc == 2)
		ft_putnbr(num);
	write(1, "\n", 1);
	return (0);
}
