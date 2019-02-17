/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_valid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 21:36:10 by zhli              #+#    #+#             */
/*   Updated: 2019/02/17 14:37:17 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	ft_is_valid(char number, char **puzzle, int row, int col)
{
	int i;
	int sqrrow;
	int sqrcol;

	i = 0;
	sqrrow = 3 * (row / 3);
	sqrcol = 3 * (col / 3);
	while (i < 9)
	{
		if (puzzle[i][col] == number)
		{
			//ft_putstr("Error\n");
			return (0);
		}
		if (puzzle[row][i] == number)
		{
			//ft_putstr("Error\n");
			return (0);
		}
		i++;
	}
	if (puzzle[(row + 2) % 3 + sqrrow][(col + 2) % 3 + sqrcol] == number)
	{
		//ft_putstr("Error\n");
		return (0);
	}
	if (puzzle[(row + 2) % 3 + sqrrow][(col + 4) % 3 + sqrcol] == number)
	{
		//ft_putstr("Error\n");
		return (0);
	}
	if (puzzle[(row + 4) % 3 + sqrrow][(col + 2) % 3 + sqrcol] == number)
	{
		//ft_putstr("Error\n");
		return (0);
	}
	if (puzzle[(row + 4) % 3 + sqrrow][(col + 4) % 3 + sqrcol] == number)
	{
		//ft_putstr("Error\n");
		return (0);
	}
	return (1);
}
