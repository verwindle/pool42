/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   headersexp.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmidori <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/19 15:27:29 by lmidori           #+#    #+#             */
/*   Updated: 2020/02/19 15:27:30 by lmidori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADERSEXP_H
# define HEADERSEXP_H

char		g_full;
char		g_obstacle;
char		g_empty;
int			g_nublines;
int			g_nubsymb;
int			cout_atoi(int val);
char		*cut_string(char *src);
int			find_len(char *vector);
int			ft_atoi(char *str);
char		*ft_strdup(char *src);
int			init_globals(char *str);
char		*read_map(char *argv, char *str, int argc);
int			valid_xymap(char *str, int x, int y, int x1);
char		*validate_map(char *str);
int			min(int a, int b, int c);
char		**init_matrix(char *vector);
int			**init_cache(char **matrix);
int			**bsq_walkthrough(int **cache, int *res);
int			*bsq_idx_to_write(int **cache, int *res);
char		**bsq_fillfull(char **matrix, int *res, int *idx);
char		**bsq(char *vector);
void		print(char *string);
#endif
