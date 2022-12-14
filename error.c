/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysingh <ysingh@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 22:08:25 by ysingh            #+#    #+#             */
/*   Updated: 2022/12/09 14:24:00 by ysingh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	ft_arg_error(mlx_t *mlx)
{
	ft_printf("\033[31m");
	ft_printf("Usage: ./fractol [fractal name]\n");
	ft_printf("Available fractals: mandelbrot, julia [Constants], burningship");
	ft_printf("\nConstants: (Only for julia fractal) [real] [imaginary]\n");
	ft_printf("\033[0m");
	if (mlx != NULL)
		mlx_terminate(mlx);
	exit(0);
}
