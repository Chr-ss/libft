/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: crasche <crasche@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 15:09:02 by crasche       #+#    #+#                 */
/*   Updated: 2023/10/09 16:46:10 by crasche       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 1;
	else if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start) + 1;
	else
		len++;
	str = malloc((len) * sizeof(char));
	if (!str)
		return (NULL);
	if (len == 1)
		str[0] = '\0';
	else
		ft_strlcpy(str, s + start, len);
	return (str);
}
