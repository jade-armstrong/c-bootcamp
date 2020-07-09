/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:33:07 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/09 13:05:56 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_print_comb2(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';

	while (a <= '9')
	{
		while (b <= '9')
		{	
			while (c <= '9')
			{
				while (d <= '9')
				{
					if ((a < c) or (a = c && b < d))
					{	
						ft_putchar(a);
						ft_putchar(b);
						ft_putchar(' ');
						ft_putchar(c);
						ft_putchar(d);
						if (a != '9' or b != '9' or c != '9' or d != '9')
						{
							ft_putchar(',');
							ft_putchar(' ');
						}
					}
					d++;
				}
				d = '0';
				c++;
			}
			c = '0';
			b++;
		}
	}
}	
