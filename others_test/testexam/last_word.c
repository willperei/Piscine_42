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
	char	*end = str;
	
	while (*end != '\0')
		end++;
	while (end > str && (*(end - 1) == ' ' || *(end -1) == '\t'))
		end--;
	
	char	*start = end;
	while (start > str && (*start -1)!= ' ' && *(start -1) != '\t'))
	{
		start--;
	}
	while (*start != '\0')r
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
