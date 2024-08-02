/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_ces.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:19:00 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/25 15:20:42 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	find_a(char *str)
{
	int	found;

	found = 0;
	while (*str != '\0')
	{
		if (*str == 'a')
		{
			write(1, str, 1);
			write(1, "\n", 1);
			found++;
			break;
		}
		str++;
	}
	if (found == 0)
	write(1, "\n", 1);
}
int	main(int argc, char **argv)
{
	if (argc == 2)
		find_a(argv[1]);
	else
		write(1, "a\n", 2);
	return (0);
}
