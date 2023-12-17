/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_keys.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 15:17:28 by hrazafia          #+#    #+#             */
/*   Updated: 2023/12/17 15:24:35 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    **ft_get_lines(char *dict, char *lines[], int size, char eol);
char	*ft_extract_key(char *line);

char	**ft_get_keys(char *dict, char **keys, int size)
{
	int		i;
	char	*lines[41];

	ft_get_lines(dict, lines, size, '\n');
	i = 0;
	while (i < size)
	{
		keys[i] = ft_extract_key(lines[i]);
		i++;
	}
	return (keys);
}
