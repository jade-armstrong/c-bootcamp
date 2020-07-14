/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:10:56 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/14 13:20:03 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1,&c,1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

char *ft_strupcase(char *str)
{
	while(*str)
	{
		if (*str > 96 && *str < 123)
		{
			*str = *str - 32;
		}
		str++;
	}
	return str;
}

int main()
{
	char *s1 = "Hello World";
	char *s2 = "strupcase";
	char *s3 = "1234Upcase5678";
	ft_putstr(ft_strupcase(s1));
	ft_putchar('\n');
	ft_putstr(ft_strupcase(s2));
	ft_putchar('\n');
	ft_putstr(ft_strupcase(s3));
	return 0;
}
