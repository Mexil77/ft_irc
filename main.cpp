/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:32:37 by emgarcia          #+#    #+#             */
/*   Updated: 2022/07/19 18:26:34 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Input.hpp"

int	ft_printError(std::string std)
{
	std::cout << std << std::endl;
	return (1);
}

int main(int ac, char **av)
{
	
	if (ac != 2)
		return (ft_printError("Error de argumentos"));
	std::cout << "av[1]: " << av[1] << std::endl;
	return (0);
}
