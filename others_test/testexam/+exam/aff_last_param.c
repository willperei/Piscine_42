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

int	main(int argc, char **argv)
{
	int	p;
	
	p = 0;
	if (argc > 1)
	{
		while (argv[argc - 1][p] != '\0')
		{
			write (1, &argv[argc - 1][p], 1);
			
			p++;
		}
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
}
