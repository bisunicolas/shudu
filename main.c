/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 11:21:39 by zhli              #+#    #+#             */
/*   Updated: 2019/02/17 13:40:58 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int	main(int argc, char **argv)
{
	char **puzzle;

	if (ft_is_valid_puzzle(argc, argv))
	{
		puzzle = ft_get_puzzle(argv);
		ft_sudoku(puzzle, 0, 0);
	}
	else
		ft_putstr("");
	return (0);
}
