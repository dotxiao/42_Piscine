/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxiao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/08 11:54:01 by xxiao             #+#    #+#             */
/*   Updated: 2016/08/09 12:02:59 by xxiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		ret_integer;
	int		is_neg;

	i = 0;
	ret_integer = 0;
	is_neg = 1;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
		|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (*str == '-')
		is_neg = -1;
	if ((*str == '-') || (*str == '+'))
		str++;
	while ((*str >= '0') && (*str <= '9'))
	{
		ret_integer = ret_integer * 10 + *str - '0';
		str++;
	}
	ret_integer = is_neg * ret_integer;
	return (ret_integer);
}
