/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printX.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llion <llion@student.42mulhouse.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:10:36 by llion             #+#    #+#             */
/*   Updated: 2022/11/23 13:36:36 by llion            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printx_before(unsigned int n, int fd)
{
	int		nbr_display;
	char	*base;
	int		nb;

	nb = 0;
	base = "0123456789ABCDEF";
	if (n > 15)
	{
		nb += ft_printx_before(n / 16, fd);
		if (nb == -1)
			return (-1);
		nbr_display = base[n % 16];
		n = n % 10;
	}
	else
		nbr_display = base[n];
	if (ft_printchar(nbr_display, fd) == -1)
		return (-1);
	nb++;
	return (nb);
}

int	ft_printx(unsigned int n, int fd)
{
	int	nb;
	int	tmp;

	nb = 0;
	tmp = ft_printx_before(n, fd);
	if (tmp == -1)
		return (-1);
	nb += tmp;
	return (nb);
}
