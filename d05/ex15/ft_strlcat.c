/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:04:01 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/15 15:04:05 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i = 0;
	int c = 0;
  unsigned int strlength = 0;
	
	while(dest[i] != '\0')
  {
    i++;
    strlength++;
  }
	
	while(src[c] != '\0' && strlength < (size - 1))
	{
		dest[i] = src[c];
		i++;
		c++;
    strlength++;
	}
	if (src[c] == '\0')
  {
    	dest[i] = '\0';
      return (strlength);
  }
  else
  {
    return size;
  }
}
