/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 11:23:44 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/29 11:38:02 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
    
}

ScavTrap::ScavTrap(std::string name)
{
    _name = name;
    _hit_pt = 100;
    _energy_pt = 50;
    _attack_pt = 20;
    std::cout << "ScavTrap " << _name << " is constructed" << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << _name << " is destructed" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gatekeeper mode" << std::endl;
}
