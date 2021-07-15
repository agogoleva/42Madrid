/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 11:38:28 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/01 15:10:11 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[15] = {"First line only"}; //Data source string
	char	dest[10]; //Data destination string
	int	i;

	dest[0] = '\0';
	printf("src: %s (length %lu) \n", src, sizeof(src)); //print source string, output only till \0

	printf("Dest before ft: %s (assigned size of destination minus 1 =  %lu)\n", dest, sizeof(dest)-1); //print destination string
	i = ft_strlcpy(dest, src, sizeof(dest)); //call function to copy one string to another, return the size of the destnation, it cannot overflow the destination buffer
	printf("Dest after ft: %s (output is size of destinattion = %d) \n", dest, i); //print destination string

	return (0);
}
