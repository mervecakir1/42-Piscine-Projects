/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 14:55:03 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/23 19:34:05 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.*/
#include <unistd.h>
int main(int argc, char **argv)
{
    int repeat = 0;
    int i = 0;

    if (argc == 2)
    {
        while(argv[1][i])
        {
            if(argv[1][i] >='a' && argv[1][i] <= 'z')
                repeat = repeat + (argv [1][i] - 'a') + 1;
            else if(argv[1][i] >='A' && argv[1][i] <= 'Z')
                repeat = repeat + (argv [1][i] - 'A') + 1;
            else
                write(1, &argv[1][i], 1);
            while(repeat)
            {
                write(1, &argv[1][i], 1);
                repeat--;  
            }  
            i++;
        }
    }
    write(1,"\n",1);
    return(0);
}

