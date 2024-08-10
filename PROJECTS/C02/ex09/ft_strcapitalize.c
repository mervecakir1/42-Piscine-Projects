/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 16:02:42 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/15 18:40:24 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)

{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)

{
	int	i;
	int	new_world;

	i = 0;
	new_world = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (new_world == 1)
			{
				str[i] = str[i] - 32;
				new_world = 0 ;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			new_world = 0;
		else
			new_world = 1;
		i++;
	}
	return (str);
}
