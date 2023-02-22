/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 18:51:08 by johernan          #+#    #+#             */
/*   Updated: 2023/02/14 18:51:09 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Elimina los caracteres de set por el inicio y por el final de s1

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t j;
	char *src;
	i = 0;
	j = ft_strlen(s1);
	if (s1 == NULL || !set)
		return (0);
	if(ft_strlen(s1) == 0 || ft_strlen(set) == 0)
	{
		src = ft_strdup(s1);
		if(src == NULL)
			return 0;
		return src;
	}
	while(s1[i] && ft_strchr(set,s1[i]))
		i++;
	while(j > i && ft_strrchr(set, s1[j]))
		j--;
	src = ft_substr((char *)s1, i, j - i + 1);
	if(src == NULL)
		return NULL;
	return src;
}
// int main(void)
// {
// 	char s1[] = "aaasssaasssaa";
// 	char set[] = "a";
// 	printf("%s",ft_strtrim(s1, set));
// 	return 0;
// }
