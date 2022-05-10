/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Boy Teulings <bteuling@student.codam.nl>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:24 by Boy Teulings      #+#    #+#             */
/*   Updated: 2022/05/10 19:36:30 by Boy Teulings     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

//optimization: strchr for finding % and then - string to write in one go

int	fmt_c(char flag, va_list args)
{
	if (flag == 'c')
	{
		ft_putchar_fd(va_arg(args, int), 1);
	}
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list args;
	int	i;

	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{	
			fmt_c(str[i + 1], args);
			i++;
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	va_end(args);
	return (0);
}

int	main(void)
{
	ft_printf("123456%c789", 'a');
	return (0);
}
