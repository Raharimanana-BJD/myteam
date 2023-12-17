/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extract_value.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:40:14 by hrazafia          #+#    #+#             */
/*   Updated: 2023/12/17 16:57:31 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str, char end);

char	*ft_extract_value(char *line)
{
	int		i;
	int		n;
	int		offset;
	char	*value;

	i = 0;
	while (line[i] != ' ')
		i++;
	offset = i + 1;
	n = ft_strlen((line + offset), '\0');
	value = (char *) malloc(n + 1);
	i = 0;
	while (i < n)
		value[i++] = line[offset++];
	value[n] = '\0';
	return (value);
}
