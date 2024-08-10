/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:00:57 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/23 13:27:33 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reproduce the behavior of the function strcpy (man strcpy).
Your function must be declared as follows:
char    *ft_strcpy(char *s1, char *s2);
*/

char *ft_strcpy(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while(s1[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);
}
#include<stdio.h>
int main()
{
    char s1[]="hi and";
    char s2[]="there";
    printf("%s",ft_strcpy(s1,s2));
    return(0);
}