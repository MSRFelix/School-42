/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_terms_counter.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llatyshe <llatyshe@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:41:21 by llatyshe          #+#    #+#             */
/*   Updated: 2025/09/21 17:30:36 by flanghof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	initialise(int *pos, int *magn, int *t)
{
	*pos = 0;
	*t = 0;
	*magn = 1;
}

void	magnitude(int *total, int magn_counter, char *input)
{
	if (magn_counter > 3 
		&& magn_counter % 3 == 1
		&& (input[magn_counter - 1] != '0'
			|| input[magn_counter] != '0'
			|| input[magn_counter + 1] != '0'))
		*total = *total + 1;
}

void	hundreds(int *total, int position, char *input)
{
	if (position % 3 == 2)
	{
		if (input[position] != '0')
		{
			(*total)++;
			if (input[position] != '1')
				(*total)++;
		}
	}
}

int	search_terms_counter(char *input)
{
	int	position;
	int	magn_counter;
	int	total;

	initialise(&position, &magn_counter, &total);
	while (input[position] != 0)
	{
		magnitude(&total, magn_counter, input);
		if (position % 3 == 0 && input[position + 1] != '1')
			if (input[position] != '0')
				total++;
		if (position % 3 == 1)
		{
			if (input[position] == '1')
				total++;
			if (input[position] > '1' && input[position] <= '9')
				total++;
		}
		hundreds(&total, position, input);
		magn_counter++;
		position++;
	}
	return (total);
}
