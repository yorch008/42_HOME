/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/22 20:11:21 by johernan          #+#    #+#             */
/*   Updated: 2023/02/22 20:11:23 by johernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_words(char const *s, char c)
{
	size_t i;
	size_t word;

	i = 0;
	word = 0;
	while(s && s[i])
	{
		if(s[i] != c)
		{
			word++;
			while(s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (word);
}
static size_t ft_letters(char const *s, char c, size_t i)
{
	size_t size;

	size = 0;
	while(s[i] != c && s[i])
	{
		i++;
		size++;
	}
	return size;
}
static void ft_free(char **str, size_t j)
{
	while(j-- > 0)
		free(str[j]);
	free(str);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t j;
	size_t words;
	size_t size;
	char **str;
	i = 0;
	j = 0;
	words = ft_words(s, c);
	str = malloc(sizeof(char *) * (words + 1));
	if(!(str))
		return NULL;
	while(j < words)
	{
		while(s[i] == c)
			i++;
		size = ft_letters(s, c, i);
		str[j] = ft_substr(s, i, size);
		if(!(str[j]))
		{
			ft_free(str, j);
			return NULL;
		}
		i = i + size;
		j++;
	}
	str[j] = 0;
	return str;
}
// int main (void)
// {
// 	char *s = "^^^1^^2a,^^^^3^^^^--h^^^^";
// 	char **final_s;
// 	char c = '^';
// 	size_t i;
// 	i = 0;

// 	final_s = ft_split(s , c);
// 	while(i <= ft_words(s, c))
// 	{
// 		printf("%s\n" , final_s[i]);
// 		i++;
// 	}
// 	return 0;
// }