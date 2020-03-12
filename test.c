/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpesonen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 16:46:02 by kpesonen          #+#    #+#             */
/*   Updated: 2020/01/30 17:24:02 by kpesonen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	sum(int count, ...)
{
	va_list ap;
	int		i;
	int		sum;

	i = 0;
	sum = 0;
	va_start(ap, count);
//	printf("%d\n", count);
	while (i < count)
	{
		sum += va_arg(ap, int);
	//	printf("%d\n", sum);
		i++;
	}
	va_end(ap);
	return (sum);
}

int	main(void)
{
	printf("%d\n", sum(5, 1, 2, 3, 4, 5));
	return (0);
}
