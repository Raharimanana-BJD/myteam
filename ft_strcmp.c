/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 16:11:14 by hrazafia          #+#    #+#             */
/*   Updated: 2023/12/17 16:11:41 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (diff == 0))
	{
		diff = s1[i] - s2[i];
		i++;
	}
	return (diff);
}
