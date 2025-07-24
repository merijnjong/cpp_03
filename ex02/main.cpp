/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:43:12 by mjong             #+#    #+#             */
/*   Updated: 2025/07/24 15:25:55 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    std::cout << "=== Testing ClapTrap ===" << std::endl;
    ClapTrap clap1("Clappy");
    ClapTrap clap2("ClappyCopy");
    ClapTrap clapDefault;

    clap1.attack("target1");
    clap1.takeDamage(5);
    clap1.beRepaired(3);

    clap2 = clap1;
    clap2.attack("target2");

    ClapTrap clapCopy(clap1);
    clapCopy.beRepaired(10);

    std::cout << "\n=== Testing ScavTrap ===" << std::endl;
    ScavTrap scav1("Scavvy");
    ScavTrap scav2(scav1);
    ScavTrap scavDefault;

    scav1.attack("intruder");
    scav1.guardGate();

    scav2.takeDamage(50);
    scav2.beRepaired(30);
    scav2.attack("intruder2");

    scavDefault.guardGate();

    scavDefault = scav1;
    scavDefault.attack("copy attack");

    std::cout << "\n=== Testing FragTrap ===" << std::endl;
    FragTrap frag1("Fraggy");
    FragTrap frag2(frag1);
    FragTrap fragDefault;

    frag1.attack("enemy");
    frag1.highFivesGuys();

    frag2.takeDamage(20);
    frag2.beRepaired(10);
    frag2.attack("enemy2");

    fragDefault.highFivesGuys();

    fragDefault = frag1;
    fragDefault.attack("copy frag attack");

    std::cout << "\n=== Testing Edge Cases ===" << std::endl;
    ClapTrap deadClap("DeadClap");
    deadClap.takeDamage(15);
    deadClap.attack("no one");
    deadClap.beRepaired(5);

    ScavTrap noEnergyScav("NoEnergyScav");
    // Exhaust energy points
    for (int i = 0; i < 51; ++i)
        noEnergyScav.attack("target");
    noEnergyScav.attack("should fail");

    FragTrap noHitFrag("NoHitFrag");
    noHitFrag.takeDamage(150);
    noHitFrag.beRepaired(10);
    noHitFrag.attack("no target");

    return (0);
}
