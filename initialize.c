/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:21:59 by ekarabud          #+#    #+#             */
/*   Updated: 2024/07/06 18:00:57 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

t_program *initialize_structs(int ac, char **av)
{
    t_program *p;
    
    p = (t_program *)malloc(sizeof(t_program));
    if(!p)
        return (NULL);
    p->philo_count = ft_atoi(av[1]);
    p->philosophers = (t_philosopher *)malloc(sizeof(t_philosopher) * p->philo_count);
    if(!p->philosophers)
        return (NULL);
}
