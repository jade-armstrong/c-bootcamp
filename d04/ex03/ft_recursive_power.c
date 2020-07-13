/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:20:28 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/13 10:20:31 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
  if (power < 0)
  {
    return 0;
  }

  if (power == 0)
  {
    return 1;
  }

  if (power == 1)
  {
    return nb;
  }

  return ft_recursive_power(nb, power - 1) * nb;
}
