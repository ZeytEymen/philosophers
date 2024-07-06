/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekarabud <ekarabud@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:10:57 by ekarabud          #+#    #+#             */
/*   Updated: 2024/07/06 17:38:59 by ekarabud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# include <unistd.h>
# include <stdio.h>
# include <pthread.h>
# include <stdlib.h>
# include <sys/time.h>


typedef struct s_philosopher
{
	int					id;
	int					meal_count;
	int					right_fork;
	int					left_fork;
	long long			last_meal_t;
	struct s_program	*p;
}	t_philosopher;


typedef struct s_program
{
	pthread_t		*threads;
	pthread_t		investigator;
	pthread_mutex_t	*forks;
	pthread_mutex_t	eating;
	pthread_mutex_t	exit;
	t_philosopher	*philosophers;
	int				philo_count;
	int				eating_time;
	int				sleeping_time;
	int				dying_time;
	int				dead_philo_c;
	int				max_food;
	int				needed_meal_c;
	long long		start_time;
}	t_program;

//utils.c
int	ft_atoi(char *str);
void argument_error(char *error_text);

//checks.c
check_arguments(ac, av);

#endif