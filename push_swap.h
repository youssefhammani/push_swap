/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhammani <yhammani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 22:31:14 by yhammani          #+#    #+#             */
/*   Updated: 2022/04/13 18:28:49 by yhammani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>
# include <stdio.h>

struct s_stack{
	int	size;
	int	maxsize;
	int	*items;
};

typedef struct v_stack {
	int		i;
	char	sep;
	char	**str;
}	t_list;

struct s_stack	*init(int cp, struct s_stack *stck);

long long		ft_atoi(const char *str);

char			*ft_strdup(const char *src);
char			*ft_strjoin(int size, char **strs, char	*sep);
char			*get_next_line(int fd);
char			**ft_split(char const *s, char c);

int				ch(char **av, int ac, int k, int j);
int				check(char **av, int j);
int				check_double(char **av, int i);
int				fdr(struct s_stack *stcka, int md);
int				ft_cword(char *str, char c);
int				ft_isdigit(int c);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_split1(char **split, char *str, char c, int k);
int				isempty(struct s_stack *stck);
int				issorted(struct s_stack *stck );
int				ft_len(char *str);
int				maincheck(char **str);
int				max(struct s_stack *stck, int end);
int				maxint(char **av, int i);
int				max_lc(struct s_stack *stck);
int				median(struct s_stack *stck);
int				min(struct s_stack *stck);
int				min_lc(struct s_stack *stck);
int				only_nb(char **ar, int i);
int				search(struct s_stack *stck, int sr, int end);
int				search_lc(struct s_stack *stck, int sr);
int				separ(char c, char sep);
int				sizeav(char **str);
int				pos(struct s_stack *stckb, int tg);

void			ac1(struct s_stack *stcka, struct s_stack *stckb,
					int ac, char **av);
void			ac2(struct s_stack *stcka, struct s_stack *stckb,
					char **str, char **av);
void			ac3(struct s_stack *stcka, struct s_stack *stckb,
					int ac, char **av);
void			check_av(char **av);
void			checker(struct s_stack *stcka, struct s_stack *stckb);
void			checker_2(struct s_stack *stcka, struct s_stack *stckb,
					char *str);
void			cpy(int ar[], struct s_stack *stck);
void			ex(char *str);
void			ft_fugazi_sort(int array[], int n);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_sort1(struct s_stack *stcka, struct s_stack *stckb);
void			ft_sort2(struct s_stack *stcka, struct s_stack *stckb);
void			ffree(char **str);
void			ffree1(char **str, struct s_stack *stcka,
					struct s_stack *stckb);
void			mainsort(struct s_stack *stcka, struct s_stack *stckb);
void			md1(int md, struct s_stack *stcka, struct s_stack *stckb);
void			md2(int md, struct s_stack *stcka);
void			md3(int md, struct s_stack *stcka);
void			pa(struct s_stack *stcka, struct s_stack *stckb, char *s);
void			pb(struct s_stack *stckb, struct s_stack *stcka, char *s);
void			pa_ra(struct s_stack *stckb, struct s_stack *stcka,
					int tg, char *str);
void			pa_rra(struct s_stack *stckb, struct s_stack *stcka,
					int tg, char *str);
void			pb_ra(struct s_stack *stckb, struct s_stack *stcka,
					int tg, char *str);
void			pb_rra(struct s_stack *stckb, struct s_stack *stcka,
					int tg, char *str);
void			push(struct s_stack *stck, int nv);
void			pushmin(struct s_stack *stcka, struct s_stack *stckb);
void			push_min(struct s_stack *stcka, struct s_stack *stckb);
void			rev_rotate(struct s_stack *stck, char *s);
void			rotate(struct s_stack *stck, char *s);
void			rr(struct s_stack *stcka, struct s_stack *stckb, char *s);
void			rrr(struct s_stack *stcka, struct s_stack *stckb, char *s);
void			sort_3(struct s_stack *stcka, struct s_stack *stckb);
void			swap(int *a, int *b);
void			swt(struct s_stack *stck, char *s);
void			ss(struct s_stack *stcka, struct s_stack *stckb, char *s);

#endif