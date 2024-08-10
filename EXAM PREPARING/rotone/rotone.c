/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:03:36 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/24 19:36:54 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main (int argc, char **argv)
{
    int i ;
    i = 0;
    if (argc == 2)
   {
        while(argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'y')
                ft_putchar(argv[1][i] += 1);
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Y')
                ft_putchar(argv[1][i] += 1);
            else if (argv[1][i] == 'z')
                ft_putchar(argv[1][i] -= 25);
            else if(argv[1][i] == 'Z')
                ft_putchar(argv[1][i] -= 25);
            else 
                ft_putchar(argv[1][i]);
            i++;
        }
        ft_putchar('\n');
    }
   return (0); 
}
