/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 22:14:44 by zhli              #+#    #+#             */
/*   Updated: 2019/04/03 22:15:44 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*str;
	int	i;

	if (min < max)
	{
		if (!(str = (int *)malloc(sizeof(int) * (max - min))))
			return (NULL);
		i = 0;
		while (min < max)
		{
			str[i] = min;
			min++;
			i++;
		}
		return (str);
	}
	else
		return ((void*)0);
}
