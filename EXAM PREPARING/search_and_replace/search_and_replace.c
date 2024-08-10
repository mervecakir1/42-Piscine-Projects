/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 19:41:01 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/24 19:58:42 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
int main(int argc, char **argv)
{
    int i;
    
    i = 0;
    if(argc == 4)
    {
        while(argv[1][i])
        {
            if(argv[2][0] == argv[1][i])
            {
                argv[1][i] = argv[3][0];
            }
            ft_putchar(argv[1][i]);
            i++;
        }
        ft_putchar('\n');
    }
    return(0);
}