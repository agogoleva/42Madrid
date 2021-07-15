/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:03:46 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/01 17:34:41 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str1[1024] = {"Here in July I am looking for the word Jumangi, the first Jumanji only"};
	char	str2[7] = {"Jumanji"};

	//If needle is an empty string, haystack is returned
	//if needle occurs nowhere in haystack, NULL is returned
	//otherwise a pointer to the first character of the first occurrence of needle is returned

	printf("src: %s\n", str1);
	printf("dest: %s\n", str2);
	printf("pointer is: %s\n", ft_strstr(str1, str2));
	return (0);
}
