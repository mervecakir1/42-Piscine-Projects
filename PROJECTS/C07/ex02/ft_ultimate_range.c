/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:51:15 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/24 13:04:54 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	size;
	int	i;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ptr = (int *)malloc(sizeof(int) * size);
	if (ptr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = ptr;
	while (i < size)
	{
		ptr[i] = min + i;
		i++;
	}
	return (i);
}
