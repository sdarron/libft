/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdarron <sdarron@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 15:47:22 by sdarron           #+#    #+#             */
/*   Updated: 2019/11/11 01:22:12 by sdarron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int ch)
{
	if ((ch >= 65) && (ch <= 90))
		return (1);
	else if ((ch >= 97) && (ch <= 122))
		return (1);
	else if ((ch >= 48) && (ch <= 57))
		return (1);
	else
		return (0);
}