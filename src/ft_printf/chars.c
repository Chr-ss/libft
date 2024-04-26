/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   chars.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: veno <veno@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/03 17:39:58 by veno          #+#    #+#                 */
/*   Updated: 2023/11/29 18:30:07 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"
// #include "../../include/ft_printf.h"

int	printf_c(int i, unsigned int *count)
{
	write(1, &i, 1);
	(*count)++;
	return (0);
}

int	printf_s(char *s, unsigned int *count)
{
	if (!s)
	{
		write(1, "(null)", 6);
		(*count) += ft_strlen("(null)");
		return (0);
	}
	write(1, s, ft_strlen(s));
	(*count) += ft_strlen(s);
	return (0);
}
