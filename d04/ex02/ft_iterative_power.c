/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:19:58 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/13 10:20:04 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_iterative_power(int nb, int power)
{
  int a = 1;

  if (power < 0)
  {
    return 0;
  }

  if (power == 0)
  {
    return 1;
  }
  
  while (power > 0)
  {
    a = a * nb;
    power--;
  }

  return a;
}
