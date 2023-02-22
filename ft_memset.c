/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 18:20:37 by johernan          #+#    #+#             */
/*   Updated: 2023/01/11 18:20:40 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, unsigned int c, size_t n)
{
	size_t		i;
	char		*aux;

	aux = str;
	i = 0;
	while (i < n)
		aux[i++] = c;
	return (str);
}
