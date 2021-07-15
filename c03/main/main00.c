/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:03:46 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/01 10:55:02 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	str1[1024] = {"String to compare"};
	char	str2[1024] = {"String to compare"};
	char	str3[1024] = {"String to compare longer"};
	char	str4[1024] = {"String to"};

	int	test_str1, test_str2, test_str3;

	test_str1 = ft_strcmp(str1, str2); //functions return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2
	test_str2 = ft_strcmp(str1, str3);
	test_str3 = ft_strcmp(str1, str4);

	printf("OK if 0: %d\n", test_str1);
	printf("OK if -1: %d\n", test_str2);
	printf("OK if 1: %d\n", test_str3);
	return (0);
}
