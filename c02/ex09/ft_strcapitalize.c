/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agogolev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 11:07:54 by agogolev          #+#    #+#             */
/*   Updated: 2021/06/30 13:04:57 by agogolev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alphanumeric(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag_word;

	i = 0;
	flag_word = 1;
	while (str[i] != '\0')
	{
		if ((flag_word == 1) && (str[i] >= 97 && str[i] <= 122))
			str[i] = str[i] - 32;
		if ((flag_word != 1) && (str[i] >= 65 && str[i] <= 90))
			str[i] = str[i] + 32;
		if (ft_is_alphanumeric(str[i]))
			flag_word = 0;
		else
			flag_word = 1;
		i++;
	}
	return (str);
}
