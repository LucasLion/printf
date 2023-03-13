/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 18:28:21 by llion             #+#    #+#             */
/*   Updated: 2022/12/12 14:31:35 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdarg.h>
# include <stdlib.h>

int			ft_printf(const char *input, ...);
int			ft_printnbr(int n, int fd);
int			ft_printchar(char c, int fd);
int			ft_printstr(char *str, int fd);
int			ft_printuint(unsigned int n, int fd);
int			ft_printx_min(unsigned int n, int fd);
int			ft_printx(unsigned int n, int fd);
int			ft_printp(unsigned long long int p, int fd);
int			ft_printpct(int fd);
int			ft_numlen(unsigned int n);

#endif
