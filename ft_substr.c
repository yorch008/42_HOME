/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 19:51:45 by johernan          #+#    #+#             */
/*   Updated: 2023/02/09 19:51:47 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Devuelve una substring resevada con malloc, que empiece desde start y longitud maxima de len

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *str;
    size_t i;
    i = 0;
    if(start >= ft_strlen(s))
        return ft_strdup("");
    if(len > ft_strlen(&s[start]))
        len = ft_strlen(&s[start]);
    str = (char *)malloc(sizeof(char) * (len + 1));
    if(str == 0)
        return NULL;
    if(s[i] && start >= 0)
    {
        while(i < len && s[start] != 0)
            str[i++] = s[start++];
    }
    str[i] = 0;
    return str;
}
