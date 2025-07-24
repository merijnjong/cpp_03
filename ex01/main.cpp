/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:10:28 by mjong             #+#    #+#             */
/*   Updated: 2025/07/24 14:37:19 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void printDivider(const std::string &title)
{
	std::cout << "\n=== " << title << " ===\n" << std::endl;
}

int main()
{
	// Test 1: Default and named constructor + attack, damage, repair
	printDivider("Test 1: Basic ScavTrap Functionality");

	ScavTrap st1("SC4V-A");
	st1.attack("target dummy");
	st1.takeDamage(30);
	st1.beRepaired(20);
	st1.guardGate();

	// Test 2: Energy depletion
	printDivider("Test 2: Energy Depletion");

	for (int i = 0; i < 51; ++i)
		st1.attack("dummy");

	// Test 3: HP depletion
	printDivider("Test 3: Hit Point Depletion");

	st1.takeDamage(999);
	st1.attack("dead enemy");
	st1.beRepaired(10);

	// Test 4: Copy constructor
	printDivider("Test 4: Copy Constructor");

	ScavTrap st2(st1); // should copy the dead st1
	st2.attack("clone target");

	// Test 5: Assignment operator
	printDivider("Test 5: Assignment Operator");

	ScavTrap st3("SC4V-B");
	st3 = st2; // assign from dead st2
	st3.attack("another dummy");

	// Test 6: Destructor order
	printDivider("Test 6: Destructor Chain Demonstration");

	{
		ScavTrap temp("TempTrap");
		temp.guardGate();
	}

	printDivider("End of Tests");

	return 0;
}
