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

/**
 * It takes a pointer to a memory location, a character, and a size_t, and fills the memory location
 * with the character up to the size_t
 * 
 * @param str The string to be filled.
 * @param c the character to fill the memory with
 * @param n the number of bytes to be filled
 * 
 * @return The address of the first byte of the memory area str.
 */
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
