/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 17:41:37 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/04 13:07:50 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	m;

	m = 0;
	while (str[m] != '\0')
	{
		if ((str[m] >= 'a') && (str[m] <= 'z'))
			str[m] = str[m] - 32;
		m++;
	}
	return (str);
}
/*
 * int main()
{
    char str[] = "AyouB";
    printf("%s" ,ft_strupcase(str));
}
*/
