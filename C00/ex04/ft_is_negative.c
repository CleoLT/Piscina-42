/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ale-tron <ale-tron@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 15:51:03 by ale-tron          #+#    #+#             */
/*   Updated: 2023/08/10 17:23:31 by ale-tron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	response;

	if (n < 0)
	{
		response = 'N';
		write(1, &response, 1);
	}
	if (n >= 0)
	{
		response = 'P';
		write(1, &response, 1);
	}
}
