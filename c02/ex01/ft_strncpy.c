/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 09:59:34 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/04 12:23:10 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)

{
	unsigned int	c;

	c = 0;
	while (src[c] != '\0' && (c < n))
	{
		dest[c] = src[c];
		c++;
	}
	while (c < n)
	{
		dest[c] = '\0';
		c++;
	}
	return (dest);
}
/*
 * int	main(void)
{
	char	dest[] = "";
	char	src[] = "serf";

	printf("%s" ,ft_strcpy (dest ,src));

	return (0);
}
*/
