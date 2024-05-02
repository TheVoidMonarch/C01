/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:10:43 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/02 17:10:45 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	zelda;

	zelda = *a;
	*a = zelda / *b;
	*b = zelda % *b;
}

/*int	main(void)
{
	int	a;
	int	b;
	
	a = 10;
	b = 3;
    ft_ultimate_div_mod(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}*/
