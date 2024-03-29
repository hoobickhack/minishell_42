/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_tok.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isouaidi <isouaidi@student.42nice.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 13:21:29 by isouaidi          #+#    #+#             */
/*   Updated: 2024/03/29 13:40:19 by isouaidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	tokken_erreur(t_parser *list, t_stru *stru)
{
	t_parser	*temp;

	if (list != NULL)
	{
		temp = list->next;
		while (list->next)
		{
			if (list->tokken != 0 && temp->tokken != 0)
			{
				printf("Token Erreur\n");
				stru->er_tok = 1;
			}
			list = list->next;
			temp = temp->next;
		}
	}
}