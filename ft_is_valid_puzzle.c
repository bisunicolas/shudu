/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid_puzzle.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 07:36:58 by zhli              #+#    #+#             */
/*   Updated: 2019/02/17 14:29:52 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	isinput(char c)
{
	if (c == '.' || (c >= '1' && c <= '9'))
		return (1);
	else
	{
		ft_putstr("Error\n");
		return (0);
	}
}

int	ft_is_valid_puzzle(int argc, char **puzzle)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc != 10)
	{
		ft_putstr("Error\n");
		return (0);
	}
	while (i < 10)
	{
		if (ft_strlen(puzzle[i]) < 9)
		{
			ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	return (1);
}
