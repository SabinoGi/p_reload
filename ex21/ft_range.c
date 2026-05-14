/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsabino- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 11:38:06 by gsabino-          #+#    #+#             */
/*   Updated: 2026/05/14 11:38:09 by gsabino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	len = max - min;
	array = (int *)malloc(len * sizeof(int));
	if (!array)
		return (0);
	while (min < max)
	{
		array[i] = min;
		i++;
		min++;
	}
	return ((int *)array);
}
