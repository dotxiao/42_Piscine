/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxiao <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/06 17:24:43 by xxiao             #+#    #+#             */
/*   Updated: 2016/08/06 19:26:56 by xxiao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char i);

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i < 123)
	{
		ft_putchar(i);
		i++;
	}
}
