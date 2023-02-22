/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:11:21 by johernan          #+#    #+#             */
/*   Updated: 2023/02/22 20:11:23 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	j = 0;
	i = 0;
	char **str;
	str = malloc(sizeof(char *) * + 1);
	while(s[i] != 0)
	{
		i++;
	}
	return str;

}
int main (void)
{
	char s[] = "hola me llamo jorge";
	char c = " ";
	printf("%s",ft_split(s,c));
	return 0;
}