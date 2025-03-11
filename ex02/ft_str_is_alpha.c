/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atuck-xi <atuck-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:26:28 by atuck-xi          #+#    #+#             */
/*   Updated: 2025/03/11 19:59:24 by atuck-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 65 && str[i] <= 90))
				|| (str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	int a = ft_str_is_alpha("heloo");
	int b = ft_str_is_alpha("hel!oo");
	char c;
	char d;
	
	c = '0' + a;
	d = '0' + b;
	write(1, &c, 1);
	write(1, &d, 1);
	return (0);
}
