/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_lines.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:39:27 by hrazafia          #+#    #+#             */
/*   Updated: 2023/12/17 14:50:34 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str, char end);
char	*ft_get_line(char *dict, int offset, char eol);

char	**ft_get_lines(char *dict, char *lines[], int size, char eol)
{
	int	i;
	int	offset;

	offset = 0;
	i = 0;
	while (i < size)
	{
		lines[i] = ft_get_line(dict, offset, eol);
		offset += ft_strlen(lines[i], '\0') + 1;
		i++;
	}
	return (lines);
}
