/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lzima <marvin@42lausanne.ch>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 18:13:16 by lzima             #+#    #+#             */
/*   Updated: 2021/08/07 20:42:47 by lzima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

void	display(int n0, int n1, int n2)
{
	n0 = n0 + '0';
	n1 = n1 + '0';
	n2 = n2 + '0';
	write(1, &n0, 1);
	write(1, &n1, 1);
	write(1, &n2, 1);
}

void	ft_print_comb(void)
{
	char	num[3];

	num[0] = 0;
	while (num[0] < 7 + 1)
	{
		num[1] = num[0] + 1;
		while (num[1] < 8 + 1)
		{
			num[2] = num[1] + 1;
			while (num[2] < 9 + 1)
			{
				display(num[0], num[1], num[2]);
				if (num[0] != 7 || num[1] != 8 || num[2] != 9)
				{
					write(1, ", ", 2);
				}
				++num[2];
			}
			++num[1];
			num[2] = num[1] + 1;
		}
		++num[0];
	}
}
