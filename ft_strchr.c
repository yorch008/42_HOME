/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 20:41:32 by johernan          #+#    #+#             */
/*   Updated: 2023/02/06 20:41:34 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Busca un caracter c en el string s de principio a fin

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*aux;

	i = 0;
	aux = (char *)s;
	while (aux[i] && aux[i] != (char)c)
		i++;
	if (aux[i] == (char)c)
		return (aux + i);
	return (NULL);
}

// int main (void)
// {
//     const char s[] = "holas";
//     printf("%s", ft_strchr(s, 't' + 256));
//     return 0;
// }