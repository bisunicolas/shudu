/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 19:35:24 by zhli              #+#    #+#             */
/*   Updated: 2019/02/17 13:35:45 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	ft_sudoku(char **puzzle, int row, int col)
{
	int nxnum;

	nxnum = '1';
	if (row == 9)
	{
		ft_print_puzzle(puzzle);
		return (1);
	}
	if (puzzle[row][col] >= '1' && puzzle[row][col] <= '9')
	{
		if (col == 8)
		{
			if (ft_sudoku(puzzle, row + 1, 0))
				return (1);
		}
		else
		{
			if (ft_sudoku(puzzle, row, col + 1))
				return (1);
		}
		return (0);
	}
	while (nxnum <= '9')
	{
		if (ft_is_valid(nxnum, puzzle, row, col))
		{
			puzzle[row][col] = nxnum;
			if (col == 8)
			{
				if (ft_sudoku(puzzle, row + 1, 0))
					return (1);
			}
			else
			{
				if (ft_sudoku(puzzle, row, col + 1))
					return (1);
			}
			puzzle[row][col] = '.';
		}
		nxnum++;
	}
	return (0);
}
