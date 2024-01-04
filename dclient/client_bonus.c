/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:09:39 by tlassere          #+#    #+#             */
/*   Updated: 2024/01/04 14:18:04 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

int	ft_socket_car(char c, pid_t pid)
{
	int	i;
	int	buffer;

	i = 0;
	buffer = 0;
	while (i < 8)
	{
		if ((c & (1 << i)) != 0)
			buffer = kill(pid, SIGUSR1);
		else
			buffer = kill(pid, SIGUSR2);
		if (buffer == -1 || pause() == -1)
			return (-1);
		i++;
	}
	return (0);
}
