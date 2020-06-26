/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmehloma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 07:42:52 by mmehloma          #+#    #+#             */
/*   Updated: 2020/06/26 09:17:10 by mmehloma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
	int  a;

	a = 0;
	
	while(src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';	
	return (dest);
}

int main(void)
{
	char i[50] = "Hello";
	char x[50];
	ft_strcpy(x,i);

	printf("%s", x);
	return 0;

}
