/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 11:08:14 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/10 11:16:04 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return 0;
	else if (nb > 12)
		return 0;
	else if (nb == 0)
		return 1;
	else
		return nb * ft_recursive_factorial(nb -1);
}
