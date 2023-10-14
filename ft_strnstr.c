/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/03 16:59:19 by crasche       #+#    #+#                 */
/*   Updated: 2023/10/09 19:11:33 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;

	len_little = ft_strlen(little);
	if (len_little == 0)
		return ((char *) big);
	while (*big && len >= len_little)
	{
		if (ft_strncmp(big, little, len_little) != 0)
		{
			big++;
			len--;
		}
		else
			return ((char *) big);
	}
	return (0);
}
