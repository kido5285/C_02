/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atuck-xi <atuck-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 12:43:02 by atuck-xi          #+#    #+#             */
/*   Updated: 2025/03/11 17:38:17 by atuck-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*int	main(void)
{
	char	a = '0' + ft_str_is_numeric("1010290");
	char	b = '0' + ft_str_is_numeric("10");
	char	c = '0' + ft_str_is_numeric("djnsanjdsa");
	
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);	
}*/
