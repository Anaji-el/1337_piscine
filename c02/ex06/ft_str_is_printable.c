/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:32:26 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/04 14:07:47 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		if ((str[s] < 32) || (str[s] > 126))
			return (0);
		s++;
	}
	return (1);
}
/*
int main()
{
    char str[] = "\n";
    printf("%d", ft_str_is_printable(str));
}
*/
