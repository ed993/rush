/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebadanai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 16:51:34 by ebadanai          #+#    #+#             */
/*   Updated: 2022/02/13 18:58:32 by ebadanai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void printer(char a)
{
	write(1, &a, 1);
}

void matrix(char **mat, int rig)
{
	int k;
	int j;

	k = 0;

	while (k < rig)
	{
		j = 0;
	
	while (j < rig)
	{
	printer(mat[k][j]);
	
	if (j != 5)
		printer(' ');
		j++;
	}
	printer('\n');
	k++;
	}
}

int main()
{
	char a[32] = {"4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2"};

	matrix(a, 6);
}
