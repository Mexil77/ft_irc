/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Input.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgarcia <emgarcia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 18:25:23 by emgarcia          #+#    #+#             */
/*   Updated: 2022/07/19 18:26:13 by emgarcia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INPUT
# define INPUT

# include <iostream>
# include <cstring>

class Input
{
	public:
		Input(void);
		Input(const	Input &obj);
		Input(std::string str);
		~Input(void);

		Input& operator = (const Input &inp);
	private:
		std::string	std;
};

#endif
