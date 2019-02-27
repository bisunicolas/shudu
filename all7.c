/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 17:41:05 by zhli              #+#    #+#             */
/*   Updated: 2019/02/25 18:41:17 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
有两个文件名字要改！
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src) char etoile source
{
	char	*dup;
	int		i;

	i = -1;
	if (!(src && (dup = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1)))))
		return (NULL);
	while (src[++i])
		cpdup[i] = src[i];
	cpdup[i] = '\0';
	return (cpdup);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 18:41:33 by zhli              #+#    #+#             */
/*   Updated: 2019/02/25 20:55:28 by zhli             ###   ########.fr       */
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
			return (NULL); not null but 0;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 20:50:15 by zhli              #+#    #+#             */
/*   Updated: 2019/02/25 21:10:08 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*intarr;
	int	i;

	if (min < max)
	{
		if (!(intarr = (int *)malloc(sizeof(int) * (max - min))))
			return (0);
		i = 0;
		while (min < max)
		{
			intarr[i] = min;
			min++;
			i++;
		}
		*range = intarr;
		return (i);
	}
	else
	{
		*range = ((void *)0);
		return (0);
	}
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/25 21:10:49 by zhli              #+#    #+#             */
/*   Updated: 2019/02/27 13:24:25 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*toconcat;
	int		cu;
	int		cbis;
	int		cter;
	int		size;

	size = 0;
	cu = 1;
	while (cu < argc)
		size += ft_strlen(argv[cu++]) + 1;
	if (!(toconcat = (char*)malloc(sizeof(char) * size)))
		return (NULL);
	cter = 0;
	cu = 1;
	while (cu < argc)
	{
		cbis = 0;
		while (argv[cu][cbis])
			toconcat[cter++] = argv[cu][cbis++];
		toconcat[cter] = '\n';
		cter++;
		cu++;
	}
	toconcat[cter - 1] = '\0';
	return (toconcat);
}

int main (int ac, char **av)
{
printf("%s\n", ft_concat_params(ac, av));
return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 11:00:09 by zhli              #+#    #+#             */
/*   Updated: 2019/02/27 13:41:01 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int		ft_words_count(char *str)
{
	int	i;
	int	words_count;

	words_count = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			words_count++;
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
					&& str[i])
			{
				i++;
			}
		}
	}
	return (words_count);
}

void	ft_allocate_strings_on_array(char *str, char **arr)
{
	int		i;
	int		j;
	int		word_size;
	char	*word;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		word_size = 0;
		while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			word_size++;
			i++;
		}
		if (word_size != 0)
		{
			word = (char*)malloc((sizeof(char) * (word_size + 1)));
			arr[j] = word;
			j++;
		}
	}
}

void	ft_fill_strings_with_characters(char *str, char **arr)
{
	int	i;
	int	k;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		if (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
		{
			k = 0;
			while (!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
					&& str[i])
			{
				arr[j][k++] = str[i++];
			}
			arr[j][k] = '\0';
			j++;
		}
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		words_count;
	char	**arr;

	words_count = ft_words_count(str);
	arr = (char**)malloc((sizeof(char*) * words_count) + sizeof(0));
	if (words_count > 0)
	{
		ft_allocate_strings_on_array(str, arr);
		ft_fill_strings_with_characters(str, arr);
		arr[words_count] = "\0";
	}
	else
		arr[0] = "\0";
	return (arr);
}

int main (int ac, char **av)
{
	char **tab;
	int i;

	char c;
	int index = -1;
	c = 'a';
	i = 'a';
	tab = ft_split_whitespaces(av[1]);
	while (tab[++index])
		printf("%s\n", tab[index]);
	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 11:00:29 by zhli              #+#    #+#             */
/*   Updated: 2019/02/27 12:24:34 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_words_tables(char **tab)
{
	int i;
	int j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
