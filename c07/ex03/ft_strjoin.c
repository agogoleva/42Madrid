/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:44:47 by agogolev          #+#    #+#             */
/*   Updated: 2021/07/15 10:37:48 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = ft_strlen(dest);
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (i < size)
	{
		len = len + ft_strlen(strs[i]);
		i++;
	}
	len = len + ft_strlen(sep) * (size - 1) + 1;
	ptr = (char *)malloc(sizeof(char) * len);
	if (size == 0 || ptr == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i != (size - 1))
			ft_strcat(ptr, sep);
		i++;
	}
	return (ptr);
}

/*int	main(int argc, char **argv)
{
	char	*output;
	char	*sep = {".|."};
	
	if (argc > 1)
	{
		output = ft_strjoin(argc - 1, argv + 1, sep);
		printf("%s\n", output);
	}
	return (0);
}*/
