/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:49:47 by iqabbal           #+#    #+#             */
/*   Updated: 2021/10/14 16:11:10 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)

{
	int	i;
	int	j;

	j = 1;
	while (ac > j)
	{
		i = 0;
		while (av[ac - 1][i] != '\0')
		{
			write (1, &av[ac - 1][i], 1);
			i++;
		}
		write (1, "\n", 1);
		ac--;
	}
}