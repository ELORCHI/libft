/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eel-orch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 17:36:01 by eel-orch          #+#    #+#             */
/*   Updated: 2019/11/09 19:19:49 by eel-orch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *tmp;
	unsigned char *ssrc;

	tmp = (unsigned char *)dst;
	ssrc = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (!len || tmp == ssrc)
		return (dst);
	if (tmp < ssrc)
	{
		while (len-- && ssrc != '\0')
			*tmp++ = *ssrc++;
	}
	else
	{
		tmp += len - 1;
		ssrc += len - 1;
		while (len--)
			*tmp-- = *ssrc--;
	}
	return (dst);
}
