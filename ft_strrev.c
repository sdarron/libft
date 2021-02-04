/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 19:06:02 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/24 03:29:44 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *s)
{
	int		i;
	int		len;
	char	t;

	i = 0;
	len = 0;
	if (s)
	{
		len = strlen(s);
		--len;
		while (i < len)
		{
			t = s[i];
			s[i] = s[len];
			s[len] = t;
			i++;
			len--;
		}
		return (s);
	}
	return (NULL);
}
