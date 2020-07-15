/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:03:28 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/15 15:03:30 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src, int nb)
{
	int i = 0;
	int c = 0;
	
	while(dest[i] != '\0')
  {
    i++;
  }
	
	while(src[c] != '\0' && c < nb)
	{
		dest[i] = src[c];
		i++;
		c++;
	}
	
	dest[i] = '\0';
	
	return (dest);
}
