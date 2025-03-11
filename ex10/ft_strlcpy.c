/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atuck-xi <atuck-xi@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 11:15:01 by atuck-xi          #+#    #+#             */
/*   Updated: 2025/03/11 20:26:09 by atuck-xi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;  
    unsigned int    srclen;

    i = 0;
    srclen = 0;
    while (src[i])
    {   
        srclen++;
        i++;
    }   
    if (size <= 0)
        return (srclen);
    i = 0;
    while (i < size - 1)
    {   
        if (i <= srclen)
            dest[i] = src[i];
        else
            return (srclen);
        i++;
    }
    dest[i] = '\0';
    return (srclen);
}

int main(void)
{
    char    dest[10] = "lop";
    char    src[] = "hello";
    int j = 0;

    ft_strlcpy(dest, src, 4); 
    while (dest[j] != '\0')
    {   
        write(1, &dest[j], 1); 
        j++;
    }   
    return (1);
}
