/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 13:10:56 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/14 13:42:06 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
  write(1,&c,1);
}

void ft_putstr(char *str)
{

  int i = 0;
	while (str[i] != 0)
  {
		ft_putchar(str[i]);
    i++;
  }
}

char *ft_strupcase(char *str)
{
  int i = 0;
	while(str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
		}
		i++;
	}
	return str;
}

int main()
{
	char s1[] = "Hello World";
	char s2[] = "strupcase";
	char s3[] = "1234Upcase5678";
	ft_strupcase(s1);
  ft_putstr(s1);
  ft_putchar('\n');
  ft_strupcase(s2);
  ft_putstr(s2);
  ft_putchar('\n');
  ft_strupcase(s3);
  ft_putstr(s3);
  ft_putchar('\n');
	return 0;
}
