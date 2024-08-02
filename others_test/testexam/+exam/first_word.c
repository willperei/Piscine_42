/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 14:00:12 by wilperei          #+#    #+#             */
/*   Updated: 2024/08/01 14:00:14 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_space(int i)
{
	if (i == '\t' || i == '\n' || i == '\v' || i == '\f' || i == ' ')
		return (1);
	else
	return (0);
}

int	main(int argc, char **argv)
{
	int	p;
	
	p = 0;
	if (argc == 2)
	{
		while (ft_space(argv[1][p]))
		{
			p++;
		}
		while (!ft_space(argv[1][p]) && argv[1][p])
		{
			write (1, &argv[1][p], 1);
			p++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}
