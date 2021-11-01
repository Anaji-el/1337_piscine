/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 11:43:48 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/05 14:39:58 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < (n - 1))
		i++;
	return (s1[i] - s2[i]);
}
/*
int main()
{
    char dd[] = "seiaw";
    char mm[] = "seiaz";
    unsigned int n = 5;
    printf("%d" ,ft_strncmp (dd, mm, n));
}
*/
