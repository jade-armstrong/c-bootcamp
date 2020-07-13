/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 10:29:52 by jarmstro          #+#    #+#             */
/*   Updated: 2020/07/13 10:30:11 by jarmstro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void     ft_putchar(char a);

void     rush(int x, int y) {

    int     xindx;
    int     yindx;
    xindx = 1;
	yindx = 2;

	while (xindx <= x) {
		if (xindx == 1 ) {
			ft_putchar('A');

        } else if (xindx == x){
            ft_putchar('C');
        }
         else {
			ft_putchar('B');
            }
        xindx++;
		}

	xindx = 2;
	ft_putchar('\n');

	while (yindx < y)
	{
		ft_putchar('B');

		while (xindx < x)
		{
			ft_putchar(' ');
			xindx++;
		}
        xindx = 2;
        if (x == 1) {
            ft_putchar('\n');
            yindx++;
        } else {
	    ft_putchar('B');
	    ft_putchar('\n');
		yindx++;
        }
	}
	xindx = 1;
	while (xindx <= x)
	{
		if (y == 1) {
            xindx = x;
        }
        else if (xindx == 1) {
			ft_putchar('A');
                
        } else if (xindx == x) {
            ft_putchar('C');
        } 
        else {
			ft_putchar('B');
        }
		xindx++;
	}
    ft_putchar('\n');
}
