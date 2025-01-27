/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joao-alm <joao-alm@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:30:13 by joao-alm          #+#    #+#             */
/*   Updated: 2024/10/23 15:30:28 by joao-alm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "notlibft.h"

/**
 * Skips spaces, tabs, and signs in the string. Updates the sign.
 * @param str Pointer to the string.
 * @param sign Pointer to the sign flag (-1 for minus, 1 for plus).
 */
static void	ft_skip_prefix(const char **str, int *sign)
{
	while (**str == ' ' || (**str >= 9 && **str <= 13))
		(*str)++;
	if (**str == '+' || **str == '-')
	{
		if (**str == '-')
			*sign *= -1;
		(*str)++;
	}
}

/**
 * Converts a string to a long long within specified limits.
 * @param str String to convert.
 * @param min Minimum value allowed.
 * @param max Maximum value allowed.
 * @param valid Pointer to validity flag (set to 0 if invalid).
 * @return Converted number or 0 if invalid.
 */
long long	ft_atoll_valid(const char *str, const long long min,
		const long long max, int *valid)
{
	long long	atoll;
	int			sign;

	if (valid)
		*valid = 1;
	sign = 1;
	ft_skip_prefix(&str, &sign);
	atoll = 0;
	if (valid && !(*str >= '0' && *str <= '9'))
		return (*valid = 0, 0);
	while (*str >= '0' && *str <= '9')
	{
		if (valid && ((sign == -1 && (atoll > (-min / 10) ||
				(atoll == (-min / 10) && *str - '0' > -(min % 10))))
				|| (sign == 1 && (atoll > (max / 10) ||
				(atoll == (max / 10) && *str - '0' > (max % 10))))))
			return (*valid = 0, 0);
		atoll = atoll * 10 + (*str - '0');
		str++;
	}
	atoll *= sign;
	if (valid && (atoll < min || atoll > max))
		return (*valid = 0, 0);
	return (atoll);
}
