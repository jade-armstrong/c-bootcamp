/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 11:22:07 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/09 13:13:38 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_is_negative(int n);
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}