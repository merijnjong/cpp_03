/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:31:21 by mjong             #+#    #+#             */
/*   Updated: 2025/07/24 14:02:09 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap bot("R2D2");

	bot.attack("Target Dummy");
	bot.takeDamage(5);
	bot.beRepaired(3);
	bot.takeDamage(10);
	bot.attack("Final Boss");
	bot.beRepaired(2);

	return (0);
}
