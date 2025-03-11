/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atuck-xi <atuck-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 13:15:05 by atuck-xi          #+#    #+#             */
/*   Updated: 2025/03/11 11:14:06 by atuck-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strlowcase(char *str);
char	*ft_strcapitalize(char *str);
int		is_alph(char a);
int		is_other(char a);
int		main(void);

// convert all alphabets to lowercase, this ensures no uppercase is present
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}

// check lowercase alphabets
int	is_alph(char a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
		return (1);
	else
		return (0);
}

// exclude unprintable characters, numbers and alphabets(including uppercase).
int	is_other(char a)
{
	if (!(is_alph(a) || (a >= 48 && a <= 57) || (a > 31 && a == 127)))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (is_alph(str[0]))
		str[0] -= 32;
	while (str[i + 1] != '\0')
	{
		if (is_other(str[i]) && is_alph(str[i + 1]))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}*/
