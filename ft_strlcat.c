/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 20:57:49 by johernan          #+#    #+#             */
/*   Updated: 2023/01/27 20:57:50 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char * dst, const char * src, size_t dstsize)
{
    size_t len;
	size_t  i;
    size_t j;

    j = 0;
	i = 0;
	len = ft_strlen((char *)dst);
    if (len < dstsize && dstsize - 1 > 0)
    {
        while(src[i] && len - 1 > 0 && len + i < dstsize - 1)
        {
            dst[j++] = src[i++];
        }
        dst[i] = 0;
    }
    if (len >= dstsize)
        len  = dstsize;
    return(len + ft_strlen(src));	
}
