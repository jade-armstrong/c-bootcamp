/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:34:40 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/09 15:55:02 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrev(char *str)
{
	int strlen = 0;
	i = 0;
	count = 0;
	char *revstr;

	while (*str)
	{
		strlen++;
		str++;
	}

	i = strlen;

	while (i >=  0)
	{
		revstr[count] = str[i]
			i--;
		count++;
	}

	*str = *revstr;

	return *str;
}
