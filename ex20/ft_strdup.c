/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsabino- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 21:13:06 by gsabino-          #+#    #+#             */
/*   Updated: 2026/05/12 21:13:09 by gsabino-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	char	*copy_s;
	size_t	len;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s) + 1;
	copy_s = (char *)malloc(len);
	if (!copy_s)
		return (NULL);
	while (s[i] != '\0')
	{
		copy_s[i] = s[i];
		i++;
	}
	copy_s[i] = '\0';
	return ((char *)copy_s);
}