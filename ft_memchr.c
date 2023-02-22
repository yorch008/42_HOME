/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 03:52:34 by johernan          #+#    #+#             */
/*   Updated: 2023/02/07 03:52:36 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *aux;
    unsigned char lt;
    aux = (unsigned char *)s;
    lt = (unsigned char)c;

    if (n == 0)
        return NULL;
    while(i < n - 1 && aux[i] != lt)
    {    
        i++;
    }
    if(aux[i] == lt)
        return (aux + i);
    return NULL; 
}
// int main()
// {
//     const char s[]="bonjourno";
//     size_t n = 2;
//     printf("%s",ft_memchr(s, 'n', 2));
//     return 0;
// }
