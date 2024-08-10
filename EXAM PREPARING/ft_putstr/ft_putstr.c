/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:49:10 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/23 13:00:41 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that displays a string on the standard output.

The pointer passed to the function contains the address of the string's first
character.

Your function must be declared as follows:

void	ft_putstr(char *str);
*/
#include<unistd.h>
void    ft_putstr(char *str)
{
    int i;

    i = 0; 
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}
int main()
{
    char a[] = "merve";
    ft_putstr(a);
}