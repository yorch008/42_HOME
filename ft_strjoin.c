/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:38:16 by johernan          #+#    #+#             */
/*   Updated: 2023/02/09 20:38:19 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Concatena 2 strings con reserva de memoria

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*aux;
	int		i;
	int		j;

	i = 0;
	j = 0;
	aux = (char *)malloc(sizeof (char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (aux == NULL)
		return NULL;
	if(s1 || s2)
	{
		while(s1[i])
		{
			aux[i] = s1[i];
			i++;
		}
		while(s2[j])
			aux[i++] = s2[j++];
		aux[i] = 0;
		return aux;
	}
	return NULL;
}
