/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fetch_dict.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrazafia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 14:37:12 by hrazafia          #+#    #+#             */
/*   Updated: 2023/12/17 14:56:02 by hrazafia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(int fd, char *str);

char	*ft_fetch_dict(char *pathname, int n)
{
	int		open_dict;
	int		read_dict;
	char	*buff;

	buff = (char *) malloc(n * sizeof(char));
	if (buff == NULL)
		return (0);
	open_dict = open(pathname, O_RDONLY);
	if (open_dict == -1)
	{
		ft_putstr(2, "error of import dict");
		return (0);
	}
	read_dict = read(open_dict, buff, n);
	if (read_dict == -1)
	{
		ft_putstr(2, "error for read the dict");
		return (0);
	}
	buff[n] = '\0';
	close(open_dict);
	return (buff);
}
