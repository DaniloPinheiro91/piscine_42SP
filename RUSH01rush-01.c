/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wsilveir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 18:01:02 by wsilveir          #+#    #+#             */
/*   Updated: 2025/04/25 18:01:03 by wsilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	start(char *str);
int		invalid_inputs(int args, char *str);

int	main(int argc, char **argv)
{
	if (invalid_inputs(argc, argv[1]))
		return (0);
	start(argv[1]);
	return (0);
}
