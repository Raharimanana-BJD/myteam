/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_values.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:40:41 by hrazafia          #+#    #+#             */
/*   Updated: 2023/12/17 14:52:41 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_get_lines(char *dict, char *lines[], int size, char eol);
char	*ft_extract_value(char *line);

char	**ft_get_values(char *dict, char **values, int size)
{
	int		i;
	char	*lines[41];

	ft_get_lines(dict, lines, size, '\n');
	i = 0;
	while (i < size)
	{
		values[i] = ft_extract_value(lines[i]);
		i++;
	}
	return (values);
}
