/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 14:46:20 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/13 14:58:34 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	if (i < n)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	return dest;
}

int main()
{
	char *str = "Hello World";
	char *dst = malloc(10*sizeof(char));
	ft_putstr(ft_strncpy(dst, str, 5));
	return 0;
}
