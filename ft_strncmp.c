/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 01:38:41 by johernan          #+#    #+#             */
/*   Updated: 2023/02/07 01:38:42 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *str1;
    unsigned char *str2;

    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;

    if (n == 0)
        return (0);

    while(i < n - 1 && str1[i] && (str1[i] == str2[i]))
        i++;

    return (str1[i] - str2[i]);
}
// int main()
// {
//     const char s1[] = "abcdefgh";
//     const char s2[] = "abcdwxyz";
//     size_t n = 4;
//     printf("%d", ft_strncmp(s1, s2, n));
//     return 0;
// }