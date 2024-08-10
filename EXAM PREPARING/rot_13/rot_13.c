/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 19:34:34 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/24 19:01:11 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main (int argc, char **argv)
{
    int i = 0;
    
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'n') 
                ft_putchar(argv[1][i] + 13);
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'N')
                ft_putchar(argv[1][i] + 13);
            else if(argv[1][i] >= 'm' && argv[1][i] <= 'z') 
                ft_putchar(argv[1][i]  - 13 );
             else if (argv[1][i] >= 'M' && argv[1][i] <= 'Z')
                ft_putchar(argv[1][i]  - 13 );
            else 
                ft_putchar(argv[1][i]);
            i++;
        }
        ft_putchar('\n');
    }
    return (0);
}