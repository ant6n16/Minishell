/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiersa <javiersa@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 21:18:10 by javiersa          #+#    #+#             */
/*   Updated: 2022/12/12 16:37:33 by javiersa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*strdup;

	strdup = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!strdup)
		return (0);
	ft_strlcpy(strdup, s1, ft_strlen(s1) + 1);
	return (strdup);
}
