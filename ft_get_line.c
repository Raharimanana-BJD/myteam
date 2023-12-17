/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_line.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:38:48 by hrazafia          #+#    #+#             */
/*   Updated: 2023/12/17 14:49:07 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str, char end);

char	*ft_get_line(char *dict, int offset, char eol)
{
	int		i;
	int		n;
	char	*line;

	n = ft_strlen((dict + offset), eol);
	line = (char *) malloc(n + 1);
	i = 0;
	while (i < n)
		line[i++] = dict[offset++];
	line[n] = '\0';
	return (line);
}
