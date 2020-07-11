/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:34:40 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/11 16:33:14 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}


char *ft_strrev(char *str)
{
	int strlen = 0;
	int i = 0;
	char *strrev = str;

	while (str[strlen] != '\0')
	{
		strlen++;
	}
	
	strlen--;

	while (strlen  >= 0)
	{
		strrev[i] = str[strlen];
		i++;
		strlen--;
	}

	return strrev;
}

int main(void)
{
	char *str = "abcdefg";
	ft_putstr(ft_strrev(str));
	return 0;
}
