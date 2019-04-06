/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 21:49:42 by zhli              #+#    #+#             */
/*   Updated: 2019/04/03 21:49:45 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb == 0 || nb == 1)
		return (result);
	else if (nb < 0 || nb >= 13)
		return (0);
	else
		while (nb > 0)
		{
			result *= nb;
			nb--;
		}
	return (result);
}
