/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:45:58 by johernan          #+#    #+#             */
/*   Updated: 2023/02/28 15:46:00 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long ft_count(long n)
{
    long count;

    count = 0;
    if(n < 0)
    {
        n = n * -1;
        count++;
    }
    while(n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}

char *ft_itoa(int n)
{
    char *str;
    long count;
    long number;

    number = n;
    count = ft_count(number);
    if(number == 0)
        return (ft_strdup("0"));
    str = malloc(sizeof(char) * count + 1);
    if(!(str))
        return NULL;
    str[count--] = '\0';
    if(number < 0)
    {
        str[0] = '-';
        number = number * -1;
    }
    while(number > 0)
    {
        str[count--] = number % 10 + '0';
        number = number / 10;
    }
    return str;
}
// int main()
// {
//     int n;
//     n = 2147483648;

//     printf("%s",ft_itoa(n));
//     return 0;
// }
