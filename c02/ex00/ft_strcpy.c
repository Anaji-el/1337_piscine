/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 10:59:50 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/04 11:51:33 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)

{
	int	c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}
	dest[c] = src[c];
	return (dest);
}
/*
 * int	main(void)
{
	char	dest[] = "";
	char	src[] = "serf";

	printf("%s" ,ft_strcpy (dest ,src));

	return (0);
}*/
