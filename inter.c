/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gverhelp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:58:30 by gverhelp          #+#    #+#             */
/*   Updated: 2020/02/27 16:07:19 by gverhelp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_double(char c, char *str1, int a)
{
	int	b;

	b = 0;
	while (b < a)
	{
		if (str1[b] == c)
			return (-1);
		b++;
	}
	return (0);
}

void	ft_inter(char *str1, char *str2)
{
	int	a;
	int	b;

	a = 0;
	while (str1[a] != '\0')
	{
		if (ft_check_double(str1[a], str1, a) == 0)
		{
			b = 0;
			while (str2[b] != '\0')
			{
				if (str1[a] == str2[b])
				{
					write(1, &str1[a], 1);
					break ;
				}
				b++;
			}
		}
		a++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
