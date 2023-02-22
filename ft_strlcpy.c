/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 19:25:29 by johernan          #+#    #+#             */
/*   Updated: 2023/01/25 19:25:31 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
	size_t len_src;
	size_t      i;

	i = 0;
	len_src = ft_strlen((char *)src);
	if (src != NULL)
	{
		if(dst != 0 && dstsize != 0)
		{
			while(i < len_src && i < (dstsize - 1))
			{
				dst[i] = src[i];
				i++;
			}
			dst[i] = 0;
		}
	}
	return (len_src);

}
/*int main (void)
{
	char *dst;
	char src[] = "copiame esta";
	size_t dstsize = 4;

	printf("%d",ft_strlcpy(dst, src, dstsize));
	return 0;
}*/
