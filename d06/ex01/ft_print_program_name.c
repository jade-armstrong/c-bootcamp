/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:14:38 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/16 15:34:47 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c)

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int main(int argc, char *argv[])
{
	(void)argc;
	ft_putstr(argv[0]);
	return 0;
}
