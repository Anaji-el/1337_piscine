/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:12:21 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/13 20:31:59 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if ((nb == 0 && power != 0) || power < 0)
	{
		return (0);
	}
	if ((power == 0) || ((nb < 0) && (power == 0)))
	{
		return (1);
	}
	else
	{
		while (power > 0)
		{
			res = nb * res;
			power --;
		}
		return (res);
	}
}
