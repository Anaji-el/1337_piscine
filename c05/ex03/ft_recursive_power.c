/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:14:33 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/13 20:32:33 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
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
		return (nb * ft_recursive_power(nb, power - 1));
	}
}
