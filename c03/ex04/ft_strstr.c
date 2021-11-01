/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 19:52:29 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/06 11:40:47 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	if (*to_find == '\0')
		return (str);
	while (str[i] != '\0')
	{
		c = 0;
		while (str[i + c] == to_find[c] && to_find[c] != '\0')
		{
			c++;
		}
		if (to_find[c] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
    char *ab = "hello world";
    char *bc = "o";
    
    printf("%s",ft_strstr(ab, bc));
}
*/
