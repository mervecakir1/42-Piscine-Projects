/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 20:21:59 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/24 13:02:51 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	size;
	int	i;

	size = max - min;
	if (min >= max)
	{
		return (NULL);
	}
	result = (int *)malloc(sizeof(int) * size);
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= size - 1)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
