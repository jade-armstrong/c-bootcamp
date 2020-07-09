/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:28:02 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/09 12:07:58 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_chars(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);

	if (a != '9' or b != '9' or c != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void ft_print_comb(void)
{
	char a = '0', b = '0', c = '0';

	while (a < '9')
	{
		while (b < '9')
		{
			while (c < '9')
			{
				if (a < b && b < c)
					ft_print_chars(a, b, c);
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;	
	}
}
