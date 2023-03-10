/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 20:11:06 by johernan          #+#    #+#             */
/*   Updated: 2023/01/19 20:11:08 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{

	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *) src;
	temp2 = (unsigned char *) dst;

	if (temp1 == 0 && temp2 == 0)
		return (0);
	if (temp1 < temp2)
	{
		while (len-- > 0)
			temp2[len] = temp1[len];
	}
	else
		ft_memcpy(temp2, temp1, len);
	return (dst);
}
/*int main(void)
 {
	 char dst[] = "oldstring";
	 char src[] = "NEWSTRING";
	 size_t len = 4;

	 printf("%s",ft_memmove(dst, src, len));
	 return 0;
 }*/
