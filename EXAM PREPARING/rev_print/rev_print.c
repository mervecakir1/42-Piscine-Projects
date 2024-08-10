/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:57:33 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/23 14:48:16 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.
*/

#include<unistd.h>
#include<stdio.h>
int main (int argc, char **argv)
{
    int i;

    i = 0;
    if(argc == 2)
    {
        while(argv[1][i] == ' ' && argv[1][i] == '\0')
        i++;
        while(argv[1][i])
        i++;
        while(i)
            write(1, &argv[1][--i], 1);
    }
    write(1, "\n", 1);
    return(0);
}