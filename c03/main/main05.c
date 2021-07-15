/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 16:03:46 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/04 11:35:32 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	dest[30] = {"Destination string ends here, "};
//	char	dest2[90] = {"Destination string ends here, "};
	char	src[32] = {"the source string continues here"};
	unsigned int	f;

//	char dest[20] = "Hola ", src[10] = "mundo_";
//	unsigned int ret;

//	int	test_str1, test_str2, test_str3;

	//appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters
	//strlcat() function returns the total length of the string they tried to create: the initial length of dst plus the length of src

	printf("Destination before ft: %s\n", dest);
	printf("Source to add: %s\n", src);
	f = ft_strlcat(dest, src, 200);
	printf("Size of src + dest: %u\n", f);
	printf("Concatenated after ft: %s\n", dest);
//	f2 = strlcat(dest2, src, 90);
//	printf("The original function gives: %u\n", f2);
//	printf("The dest after original function: %s\n", dest2); 
	return (0);

//	ret = ft_strlcat(dest, src, 8);
//	printf("Salida esperada \"Hola mu\" (%s) y return 10 (%d)\n", dest, ret);
//	ret = ft_strlcat(dest, src, 20);
//	printf("Salida esperada \"Hola mumundo_\" (%s) y return 12 (%d)\n", dest, ret);
}
