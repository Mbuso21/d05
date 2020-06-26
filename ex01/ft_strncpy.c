/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:12:07 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/26 09:16:46 by mmehloma         ###   ########.fr       */
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

int main(void)
{
    char i[50] = "Hello";
    char x[50];
    ft_strncpy(x,i,3);

    printf("%s", x);
    return 0;

}
