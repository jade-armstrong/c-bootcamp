/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:27:05 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/16 16:35:27 by jarmstro         ###   ########.fr       */
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

void ft_sort(int argc, char **argv)
{
	int i;
	int j;
	char tmp[];

	i = 1;
	while (i < argc -1)
	{
		if ft_strcmp(argv[i], argv[j]) > 0
	}
}

int main(int argc, char *argv[])
{
	int i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return 0;
}
