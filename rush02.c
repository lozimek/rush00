/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lukozime <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:08:54 by lukozime          #+#    #+#             */
/*   Updated: 2024/09/15 14:34:32 by lukozime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print(int width, char first, char middle, char last)
{
	int	i;

	i = 1;
	ft_putchar(first);
	while (i <= width - 2)
	{
		ft_putchar(middle);
	}
	if (width > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x > 0 && y > 0)
	{
		while (i <= y)
		{
			if (i == 1)
				ft_print(x, 'A', 'B', 'A');
			else if (i >= y)
				ft_print(x, 'C', 'B', 'C');
			else
				ft_print(x, 'B', ' ', 'B');
			i++;
		}
	}
}

int	main(void)
{
	rush(5, 6);
	return (0);
}
