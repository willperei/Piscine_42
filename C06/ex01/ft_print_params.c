/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:13:28 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/30 19:13:30 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argw, char **argv)
{
	int	i;
	int	p;

	p = 1;
	while (p < argw)
	{
		i = 0;
		while (argv[p][i])
		{
			ft_putchar(argv[p][i]);
			i++;
		}
		ft_putchar('\n');
		p++;
	}
	return (0);
}
