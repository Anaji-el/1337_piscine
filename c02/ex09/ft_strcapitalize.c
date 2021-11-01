/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaji-el <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:27:24 by anaji-el          #+#    #+#             */
/*   Updated: 2021/10/04 15:02:28 by anaji-el         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcapitalize(char *str)

{
	int	i;
	int	car;

	i = 0;
	car = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (car && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = (str[i] - 32);
			else if (!car && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = (str[i] + 32);
			car = 0;
		}
		else
		{
			car = 1;
		}
		i++;
	}
	return (str);
}
/*#include<stdio.h>
int main(void)
{
  char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
  printf("%s" ,ft_strcapitalize(str));
  return (0);
}*/
