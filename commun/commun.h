/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   commun.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlassere <tlassere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/30 10:07:21 by tlassere          #+#    #+#             */
/*   Updated: 2024/01/01 17:24:31 by tlassere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMMUN_H 
# define COMMUN_H 
# include <unistd.h>
# include <stdlib.h>

size_t	ft_strlen(char *s);
ssize_t	ft_putstr(char *s);
ssize_t	ft_putcar(int c);

#endif