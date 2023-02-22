/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 05:11:12 by johernan          #+#    #+#             */
/*   Updated: 2023/02/07 05:11:13 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;
    i = 0;
    char *str1 = (char *) haystack;
    
    if(needle[i] == 0)
        return (str1);
    if(str1[i] == 0)
        return NULL;

    while(i < len && str1[i])
    {
        j = 0;
        while(str1[i + j] == needle[j] && i + j < len )
        {
            if(needle[j + 1] == 0)
                return (str1 + i);
            j++;
        }
        i++;
    }
    return (NULL);
}
// int main()
// {
//     char haystack[] = "abc";
//     char needle[] = "abcd";
//     size_t len = 10;
//     printf("%s", ft_strnstr(haystack, needle, len));
//     return 0;
// }
