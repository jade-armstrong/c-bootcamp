# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jarmstro <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/16 13:05:38 by jarmstro          #+#    #+#              #
#    Updated: 2020/07/16 13:09:48 by jarmstro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -c ft_putchar.c
gcc -c ft_swap.c
gcc -c ft_putstr.c
gcc -c ft_strlen.c
gcc -c ft_strcmp.c
ar cq libft.a *.o
