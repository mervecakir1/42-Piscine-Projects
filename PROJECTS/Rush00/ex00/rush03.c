/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:58:19 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/06 20:07:27 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_yazdir(int sutun, char ilk, char orta, char son)
{
	int	harf_sayisi;

	harf_sayisi = 1;
	while (harf_sayisi <= sutun)
	{
		if (harf_sayisi == 1)
		{
			ft_putchar(ilk);
		}
		else if (harf_sayisi == sutun)
		{
			ft_putchar(son);
		}
		else
		{
			ft_putchar(orta);
		}
		harf_sayisi++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	satir_sayisi;

	satir_sayisi = 1;
	if (x >= 1 && y >= 1)
	{
		while (satir_sayisi <= y)
		{
			if (satir_sayisi == 1 || satir_sayisi == y)
			{
				ft_yazdir(x, 'A', 'B', 'C');
			}
			else
			{
				ft_yazdir (x, 'B', ' ', 'B');
			}
			satir_sayisi++;
		}
	}
}
