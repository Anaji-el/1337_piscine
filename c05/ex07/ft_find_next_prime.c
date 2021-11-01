/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 11:21:30 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/13 20:36:17 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	m;
	int	i;

	i = 2;
	if (nb == 0 || nb == 1 || nb < 0)
	{
		return (0);
	}
	while (i < nb)
	{
		m = nb % i;
		if (m == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (nb < 2147483647 && ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
