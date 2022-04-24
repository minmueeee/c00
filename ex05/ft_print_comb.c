/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmin <bmin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 18:33:12 by bmin              #+#    #+#             */
/*   Updated: 2022/04/20 21:55:27 by bmin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnum(int a, int b, int c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a < ':')
	{
		b = a +1;
		while (b < ':')
		{
			c = b +1;
			while (c < ':')
			{
				ft_putnum(a, b, c);
			c++;
			}
		b++;
		}
	a++;
	}
}



int	main(void)
{
	ft_print_comb();
}
