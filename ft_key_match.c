/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_match.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:12:11 by hrazafia          #+#    #+#             */
/*   Updated: 2023/12/17 17:09:39 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

int	ft_key_match(char  *nb, char **keys, int n_keys)
{
	int	i;

	i = 0;
	while (i < n_keys)
	{
		if (ft_strcmp(nb, keys[i]) == 0)
			break ;
		i++;
	}
	if (i == n_keys)
		return (-1);
	else
		return (i);
}
