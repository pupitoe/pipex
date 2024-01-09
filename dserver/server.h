/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:24:24 by tlassere          #+#    #+#             */
/*   Updated: 2024/01/09 01:05:55 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H
# define SERVER_H
# include "../commun/commun.h"
# define FULL_STR 1

void	ft_get_signal(int signal, siginfo_t *info, void *ucontext);
int		ft_rep_signal(int signal, int delet);
extern int	g_free_instruction;

typedef struct	s_client
{
	pid_t	client_pid;
	int		action;
}				t_client;

int		ft_queue(pid_t client, t_list **queue);
void	ft_delete_queue(t_list **queue);
int		ft_check_content(t_list *lst, pid_t client);
t_list	*ft_creat_el(pid_t client);

#endif