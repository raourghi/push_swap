/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raourghi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 16:36:36 by raourghi          #+#    #+#             */
/*   Updated: 2021/10/13 16:36:39 by raourghi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include "push_swap.h"
# include "../get_next_line/get_next_line.h"

void	ft_select_instruction(char *line, t_stacks *stacks);
void	ft_print(t_stacks *stacks);
void	ft_print_stack_b(t_stacks *stacks);
void	ft_print_stack_a(t_stacks *stacks);
#endif
