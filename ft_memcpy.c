/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:28:08 by johernan          #+#    #+#             */
/*   Updated: 2023/01/17 13:28:10 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	i = 0;
	temp1 = (unsigned char *) src;
	temp2 = (unsigned char *) dst;
	if(temp1 == 0 && temp2 == 0)
		return NULL;
	while (i < n)
	{
		temp2[i] = temp1[i];
		i++;
	}
	return (dst);
}
/*int main (void)
{
	char dst[50];
	char src[]= "hola me lllamo";
	int n = 5;

	printf("%s",ft_memcpy(dst, src, n));
	return 0;
}*/