/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 10:52:21 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/10 10:54:30 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{  
	if (nb == 0)
		return 1;
	if (nb < 0)
		return 0;
	if (nb > 12)
		return 0;

	int nb_fact = 1;
	int count = 1;
	while (count <=  nb)
	{
	   	nb_fact =  nb_fact * count;
		count++;		    
	}

	return nb_fact;
}

