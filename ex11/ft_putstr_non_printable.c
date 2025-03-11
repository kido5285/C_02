/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atuck-xi <atuck-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:34:41 by atuck-xi          #+#    #+#             */
/*   Updated: 2025/03/11 18:03:22 by atuck-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	logic(int rem)
{
	if (rem == 15)
		return ('f');
	else if (rem == 14)
		return ('e');
	else if (rem == 13)
		return ('d');
	else if (rem == 12)
		return ('c');
	else if (rem == 11)
		return ('b');
	else if (rem == 10)
		return ('a');
	else
		return (rem + '0');
}

void	convert_dec_to_hex_and_prt(int a)
{
	char	hex_arr[2];
	int		i;
	int		rem;

	i = 0;
	while (a > 0)
	{
		rem = a % 16;
		hex_arr[i] = logic(rem);
		i++;
		a /= 16;
	}
	if (i == 1)
		ft_putchar('0');
	while (i >= 0)
	{
		ft_putchar(hex_arr[i]);
		i--;
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32)
		{
			ft_putchar('\\');
			convert_dec_to_hex_and_prt(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*int	main(void)
{
	ft_putstr_non_printable("Coucour\bu vas \bien ?");
	return (1);
}*/
