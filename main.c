/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:41:19 by hrazafia          #+#    #+#             */
/*   Updated: 2023/12/17 17:09:13 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_fetch_dict(char *pathname, int n);
char	**ft_get_values(char *dict, char **values, int size);
char	**ft_get_keys(char *dict, char **keys, int size);
void	ft_putstr(int fd, char *str);
int		ft_key_match(char  *nb, char **keys, int n_keys);
char	*ft_to_letter(int key, char **values);

/*
int	main(void)
{
	char	*dict;
	char	*keys[41];
	int		n;
	int		i;

	n = 41;
	dict = ft_fetch_dict("numbers.dict", 691);
	if (dict == 0)
		return (0);
	ft_get_keys(dict, keys, n);
	i = 0;
	while (i < n)
	{
		ft_putstr(1,  keys[i]);
		i++;
	}
	return (0);
}
*/
/*
int	main(void)
{
	char	*dict;
	char	*values[41];
	int		n;
	int		i;

	n = 41;
	dict = ft_fetch_dict("numbers.dict", 691);
	if (dict == 0)
		return (0);
	ft_get_values(dict, values, n);
	i = 0;
	while (i < n)
	{
		ft_putstr(1, values[i]);
		i++;
	}
	return (0);
}*/

int	main(int argc, char **argv)
{
	char	*dict;
	char	*keys[41];
	char	*values[41];
	int		key;
	int		n;

	if (argc == 2)
	{
		n = 41;
		dict = ft_fetch_dict("numbers.dict", 691);
		if (dict == 0)
			return (0);
		ft_get_keys(dict, keys, n);
		ft_get_values(dict, values, n);
		key = ft_key_match(argv[1], keys, n);
		if(key != -1)
			ft_putstr(1, ft_to_letter(key, values));
	}
	return (0);
}
