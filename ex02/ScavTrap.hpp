/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 14:43:07 by mjong             #+#    #+#             */
/*   Updated: 2025/07/24 15:26:14 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	void attack(const std::string &target);
	void guardGate();

	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &scavtrap);
	
	ScavTrap &operator=(const ScavTrap &scavtrap);

	ScavTrap();
	~ScavTrap();
};

#endif
