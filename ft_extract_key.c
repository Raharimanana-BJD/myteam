/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_key.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:15:50 by hrazafia          #+#    #+#             */
/*   Updated: 2023/12/17 16:59:40 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str, char end);

char	*ft_extract_key(char *line)
{
	int		i;
	int		n;
	char	*key;

	n = ft_strlen(line, ':');
	key = (char *) malloc(n + 1);
	i = 0;
	while (i < n)
	{
		key[i] = line[i];
		i++;
	}
	key[n] = '\0';
	return (key);
}
