/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 10:35:51 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/19 10:42:59 by wilperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	while (*str != '\0')
	{
		str++;
	}
	while (str > 0 && *(str - 1) != ' ')
	{
		str--;
	}
	char	*start = str;
	while (start > 0 && *(start - 1) != ' ')
	{
		start--;
	}
	while (*start != '\0')
	{
		write(1, start, 1);
		start++;
	}
	
}
int	main()
{
	char str[] = "";
	last_word(str);
	write(1, "\n", 1);
	return (0);
}
