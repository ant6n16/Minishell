/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javiersa <javiersa@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 20:43:46 by javiersa          #+#    #+#             */
/*   Updated: 2022/12/12 16:28:28 by javiersa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*calloc;

	calloc = malloc (size * count);
	if (!calloc)
		return (0);
	count = size * count;
	size = 0;
	while (size < count)
	{
		((char *)calloc)[size] = 0;
		size++;
	}
	return (calloc);
}
