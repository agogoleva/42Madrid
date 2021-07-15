/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:03:46 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/01 12:02:10 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncat(char *s1, char *s2, unsigned int nb);

int	main(void)
{
	char	str1[1024] = {"Destination string ends here, "};
	char	str2[1024] = {"the source string| continues here"};

//	int	test_str1, test_str2, test_str3;

	//functions append a copy of the null-terminated string s2 to the end of the null-terminated string s1, then add a termi-nating `\0'

	printf("Destination before ft: %s\n", str1);
	printf("Source to add: %s\n", str2);
	printf("Concatenated after ft: %s\n", ft_strncat(str1, str2, 18));
	return (0);
}
