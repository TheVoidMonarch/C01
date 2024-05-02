/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbin-jef <sbin-jef@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 16:28:44 by sbin-jef          #+#    #+#             */
/*   Updated: 2024/05/03 01:17:30 by sbin-jef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *zel, int *da)
{
	int	zelda;

	zelda = *zel;
	*zel = *da;
	*da = zelda;
}
/*int	main(void)
{
	int x = 100;
	int z = 200;
	ft_swap(&x, &z);

	printf ("Swap Value: x = %d\n, z = %d", x, z);
	return (0);
}*/
