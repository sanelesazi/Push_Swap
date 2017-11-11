/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssibiya <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 10:32:12 by ssibiya           #+#    #+#             */
/*   Updated: 2017/11/10 16:00:09 by ssibiya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PUSHSWAP_H
# define _PUSHSWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include "libft/libft.h"
# include <stdio.h>

typedef struct      t_list
{
    int				data;
    struct t_list	*next;
    struct t_list	*prev;
}					t_stack;

void	ft_ss(t_stack *stack_a, t_stack *stack_b);
void	ft_swap(t_stack *t_stack);
void	ft_push(t_stack **a, t_stack **b);
void	ft_rotate(t_stack **s);
void	ft_rr(t_stack **a, t_stack **b);
void	ft_revrotate(t_stack **s);
void	ft_rrr(t_stack **a, t_stack **b);
void	ft_printer(t_stack *a, t_stack *b);
t_stack	*ft_getstack(void);
t_stack	*ft_getlast(t_stack *s);
int		ft_store(t_stack *a_stack, char **av, int ac);
int		ft_errhandler(char **av, t_stack *a);
int		ft_asort(t_stack *a);
int		ft_dsort(t_stack *b);
int		ft_findbig(t_stack *s);
int		ft_doswap(t_stack *a, t_stack *b);
int		ft_dorevrot(t_stack **a, t_stack **b, int pushed);
int		ft_dorot(t_stack **a, t_stack **b, int pushed);
int		ft_dopush(t_stack **a, t_stack **b, int push);
int		ft_findsmall(t_stack *a_stack);
int     ft_lstlen(t_stack *s);
int     ft_findsecsmall(t_stack *a_stack, int smaller);
int		ft_smallestdiff(t_stack *a, t_stack *b);
int		ft_difference(int a, int b);
int		ft_findsecbig(t_stack *s);
int     ft_quicksort(t_stack *a);
int		ft_pivot(t_stack **a);
#endif
