/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_leak.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccamie <ccamie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 17:46:18 by ccamie            #+#    #+#             */
/*   Updated: 2022/05/11 18:45:48 by ccamie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int	check_test(void)
{
	t_data	data;

	data = parser();
	data.returned = ft_substr(data.string, data.start, data.lenght);
	remove_all(data);
	return (0);
}
