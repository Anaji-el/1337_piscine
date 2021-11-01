/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 16:54:59 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/04 14:12:03 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)

{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] < 'A') || (str[a] > 'Z'))
			return (0);
		a++;
	}
	return (1);
}
/*
int main()
{
    char str[] = "AYOUB";
    printf("%d", ft_str_is_uppercase(str));
}*/
