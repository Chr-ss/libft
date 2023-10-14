/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 12:32:36 by crasche       #+#    #+#                 */
/*   Updated: 2023/10/07 12:15:37 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*scr;
	unsigned char	chr;

	scr = (unsigned char *) s;
	chr = (unsigned char) c;
	while (n--)
	{
		if (*scr == chr)
			return (scr);
		scr++;
	}
	return (NULL);
}
