/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjong <mjong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 14:55:29 by mjong             #+#    #+#             */
/*   Updated: 2025/07/24 15:18:48 by mjong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	void highFivesGuys(void);
	
	FragTrap(const std::string &name);
	FragTrap(const FragTrap &fragTrap);

	FragTrap &operator=(const FragTrap &fragTrap);
	
	FragTrap();
	~FragTrap();
};

#endif
