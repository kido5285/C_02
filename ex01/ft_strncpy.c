/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atuck-xi <atuck-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:41:15 by atuck-xi          #+#    #+#             */
/*   Updated: 2025/03/11 20:19:17 by atuck-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 1;
	while (i < n)
	{
		if (src[i] != '\0' && j  == 1)
			dest[i] = src[i];
		if (src[i] == '\0')
			j = 0;
		if (j == 0)
			dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	src[10] = "hello";
	char	dest[10] = "yoan";

	printf("bef: %s, %s\n", src, dest);
	ft_strncpy(dest, src, 10);
	printf("aft: %s, %s\n", src, dest);	
	return (0);
}*/
