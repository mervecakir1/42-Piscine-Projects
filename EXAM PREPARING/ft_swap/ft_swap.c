/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mervcaki <mervcaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 13:46:07 by mervcaki          #+#    #+#             */
/*   Updated: 2024/07/23 13:56:07 by mervcaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that swaps the contents of two integers the adresses of which
are passed as parameters.

Your function must be declared as follows:

void	ft_swap(int *a, int *b);*/

void ft_swap(int *a, int *b)
{
    int temp;
    
    temp = *a;  //* unutma çünkü işaret ettiği değerleri değiştiriyoruz
    *a = *b;
    *b = temp;
}
#include <stdio.h>
int main()
{
    int a = 5;
    int b = 3;
    ft_swap(&a,&b);
    printf("%d || %d",a,b);
}