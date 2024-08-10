/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 21:28:34 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/24 22:45:33 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.
*/
#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if(argv[1][i] >= 'a'&& argv[1][i] <= 'z')
            {  
                ft_putchar(argv[1][i] = 'z' + ('a'- argv[1][i]));
            }
            else if (argv[1][i] >= 'A'&& argv[1][i] <= 'Z')
            {
                ft_putchar(argv[1][i] = 'Z' + ('A'- argv[1][i]));
               
            }
            else 
                ft_putchar(argv[1][i]);
        i++;        
        }
        ft_putchar('\n');
    }
    return (0);
}