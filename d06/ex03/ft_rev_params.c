/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:19:07 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/16 16:26:17 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str++);
	}
}

int main(int argc, char **argv)
{
	int i;
   	i = argc - 1;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i--;
	}
	return 0;
}
