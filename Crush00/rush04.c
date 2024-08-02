/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wilperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 09:20:15 by wilperei          #+#    #+#             */
/*   Updated: 2024/07/13 13:51:38 by rben-zin         ###   ########.fr       */
/*   Updated: 2024/07/13 11:15:45 by sheiles          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void ft_putchar(char c);

void rush(int x, int y)
{
	int cx; //counter for lines
	cx=1;
	int cy; //counter for columns

	while(cx<=x)
	{
		cy=1;
		while(cy<=y)
		{
			if(cx==1)
			{	
				if(cy==1)
					{
						ft_putchar('A');
					}
					else if(cy==y)
					{
						ft_putchar('C');
					}
				else
				{
					ft_putchar('B');
				}
			}
			else if(cx==x)
			{
				if(cy==1)
				{
					ft_putchar('C');
				}
				else if(cy==y)
				{
					ft_putchar('A');
				}
				else
				{
					ft_putchar('B');
				}
				
			}
			else
			{
				if(cy==1 || cy==y)
				{
					ft_putchar('B');
				}
				else
				{
					ft_putchar(' ');
				}
			}
		cy++;	
		}
		ft_putchar('\n');
	cx++;
	}
}


