/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/16 14:59:45 by zhli              #+#    #+#             */
/*   Updated: 2019/02/17 13:40:22 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
#define FT_SUDOKU_H

int		ft_sudoku(char **argv, int row, int col);
int		ft_is_valid_puzzle(int argc, char **puzzle);
int		ft_is_valid(char number, char **puzzle, int row, int column);
void	ft_print_puzzle(char **puzzle);
char	**ft_get_puzzle(char **argv);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);

#endif
