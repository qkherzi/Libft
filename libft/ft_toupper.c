/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qkherzi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:07:41 by qkherzi           #+#    #+#             */
/*   Updated: 2021/03/23 14:02:15 by qkherzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int s)

{
	if (s >= 'a' && s <= 'z')
		return (s -= 32);
	return (s);
}
