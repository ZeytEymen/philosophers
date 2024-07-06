/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:48:26 by ekarabud          #+#    #+#             */
/*   Updated: 2024/07/06 17:29:48 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "philosophers.h"

void check_arguments(int ac, char **av)
{
    int i;

    i = 1;
    if(ac < 5 || ac > 6)
        argument_error("Argument Count Error !!");
    if (ft_atoi(av[1]) > 200)
        argument_error("Philosopher count should less than 200.");
    while(av[i])
    {
        if(ft_atoi(av[i]) <= 0)
            argument_error("Argument Error !");
        i++;
    }
}