/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gverhelp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 15:57:38 by gverhelp          #+#    #+#             */
/*   Updated: 2020/02/27 16:55:26 by gverhelp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_double(char c, char *str, int a)
{
	int	b;

	b = 0;
	while (b < a)
	{
		if (str[b] == c)
			return (-1);
		b++;
	}
	return (0);
}

void	ft_union(char *str1, char *str2)
{
	int a;
	int b;

	a = 0;
	while (str1[a] != '\0')
	{
		if (ft_check_double(str1[a], str1, a) == 0)
			write(1, &str1[a], 1);
		a++;
	}
	b = 0;
	while (str2[b] != '\0')
	{
		if ((ft_check_double(str2[b], str1, a) == 0) && (ft_check_double(str2[b], str2, b) == 0))
			write(1, &str2[b], 1);
		b++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
