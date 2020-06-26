/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:12:07 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/26 12:26:14 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int  a;

    a = 0;

    while(src[a] != '\0')
    {
        dest[a] = src[a];
        a++;
    }
    dest[n] = '\0';
    return (dest);
}


