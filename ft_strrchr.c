/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:05:41 by johernan          #+#    #+#             */
/*   Updated: 2023/02/07 01:05:43 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Busca un caracter c en el string s del final al principio

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    i = 0;
    char *aux;
    aux = (char *)s;
    i = ft_strlen(aux);
    while(aux[i] != (char)c && i > 0)
        i--;
    if(aux[i] == (char)c)
        return (aux + i);
    return NULL;
}
/*int main (void)
{
    const char s[] = "holas";
    printf("%s", ft_strchr(s, 't' + 256));
    return 0;
}*/
