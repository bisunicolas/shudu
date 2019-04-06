/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhli <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 18:14:10 by zhli              #+#    #+#             */
/*   Updated: 2019/04/06 13:49:30 by zhli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)
		return (*s1 - *s2);
	return (0);
}

void	ft_display(int i, char **str)
{
	ft_putstr(str[i]);
	ft_putchar('\n');
}

int		main(int argc, char *argv[])
{
	int		i;
	char	*tmp;

	i = 1;
	if (argc)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				i = 1;
			}
			else
				i++;
		}
		i = 1;
		while (argv[i])
			ft_display(i++, argv);
	}
	return (0);
}
