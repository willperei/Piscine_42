/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:28:34 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/31 16:28:46 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	p;
		
	p = 0;
	if (argc == 2)
	{
		while (argv[1][p] != '\0')
		{
			if (argv[1][p] == 'a')
			{
				write(1, "a", 1);
				break;
			}
			
		}
		p++;
		write(1, "\n", 1);
	}
	else	
		write (1, "a\n", 2);
}
