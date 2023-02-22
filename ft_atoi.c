/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 18:36:36 by johernan          #+#    #+#             */
/*   Updated: 2023/02/07 18:36:37 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int number;
    int sign;
    i = 0;
    sign = 1;
    number = 0;

    while((str[i] > 8 && str[i] < 14 )|| str[i] == 32)
        i++;
    if(str[i] == 45)
        sign *= -1;
    if(str[i] == 45 || str[i] == 43)
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        number =  number * 10 + (str[i] - '0');
        i++;
    }
    return (number * sign);
}
// int main()
// {
//     char str[] = " -123agr23";
//     printf("%d",ft_atoi(str));
//     return 0;
// }