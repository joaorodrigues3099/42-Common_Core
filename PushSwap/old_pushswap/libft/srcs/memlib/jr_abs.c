/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   jr_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 22:55:35 by joao-alm          #+#    #+#             */
/*   Updated: 2024/11/25 22:55:35 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/memlib.h"

int	ft_abs(int i)
{
	if (i < 0)
		return (-i);
	return (i);
}