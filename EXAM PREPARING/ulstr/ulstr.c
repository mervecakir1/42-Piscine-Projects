/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 20:50:13 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/24 21:13:16 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.
You must display the result followed by a '\n'.
If the number of arguments is not 1, the program displays '\n'.
*/

#include <unistd.h>
void ft_putchar(char c)
{
    write(1,&c,1);
}
int main (int argc,char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                ft_putchar(argv[1][i] += 32);
            else if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                ft_putchar(argv[1][i] -= 32);
            else 
                ft_putchar(argv[1][i]);
            i++;
        }
        ft_putchar('\n');
    }
    return (0);
}