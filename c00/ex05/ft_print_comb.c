/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 10:53:32 by anaji-el          #+#    #+#             */
/*   Updated: 2021/09/26 16:50:57 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_char(char a, char b, char c)

{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a != '7' || b != '8' || c != '9' )
	{
		write(1, ", ", 1);
	}
}

void	ft_print_comb(void)
{
	char	d;
	char	e;
	char	f;

	d = '0';
	while (d <= '7')
	{
		e = d + 1;
		while (e <= '8')
		{
			f = e + 1;
			while (f <= '9')
			{
				ft_char (d, e, f);
				f++;
			}
			e++;
		}
		d++;
	}
}
