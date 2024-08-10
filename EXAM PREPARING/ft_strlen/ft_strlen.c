/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:38:46 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/23 13:42:18 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that returns the length of a string.
Your function must be declared as follows:
int	ft_strlen(char *str);
*/
int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}
#include <stdio.h>
int main()
{
    char a[] = "hi and there";
    printf("%d",ft_strlen(a));
}