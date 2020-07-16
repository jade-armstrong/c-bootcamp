/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:27:05 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/16 16:35:27 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);

void ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
int ft_strcmp(char *s1, char *s2)
{
	while(*s1 != '\0' && *s2 != '\0'  && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return 0;
	}
	else if (*s1 > *s2)
	{
		return 1;
	}
	else
	{
		return -1;
	}
}
void ft_sort(int argc, char **argv)
{
	int i;
	int j;
	char *tmp;
	i = 1;
	while (i < argc -1)
	{
    j = i + 1;
    while (j < argc)
    {
      if (ft_strcmp(argv[i], argv[j]) > 0)
      {
        tmp = argv[i];
        argv[i] = argv[j];
        argv[j] = tmp;
      }
      j++;
    }
    i++;
	}
}

int main(int argc, char *argv[])
{
	int i = 1;
  ft_sort(argc, argv);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return 0;
}