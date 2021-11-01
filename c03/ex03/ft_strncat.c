/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 18:37:27 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/05 18:52:46 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	s;

	i = 0;
	s = 0;
	while (dest[i] != '\0')
		i++;
	while (src[s] != '\0' && s < nb)
	{
		dest[i + s] = src[s];
		s++;
	}
	dest[i + s] = '\0';
	return (dest);
}
/*int main()
{ 
    char el[] = "hello";
    char ab[] = "world";
    int nb = 5;
    
    printf("%s", ft_strncat (el, ab, nb));
}*/
