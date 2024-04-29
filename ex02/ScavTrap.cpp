/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 11:23:44 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/29 14:21:46 by yitoh         ########   odam.nl         */
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
    std::cout << "ScavTrap " << _name << " is constructed -- ";
    std::cout << "Hit:" << _hit_pt << " Energy:" << _energy_pt << " Damage:" << _attack_pt << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap " << _name << " is destructed" << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if (_energy_pt <= 0 || _hit_pt <= 0){
        std::cout << YELLOW << "ScavTrap " << _name << ": Attack failed. Hit Points: "\
        << _hit_pt << " Energy Points: "<< _energy_pt << RESET << std::endl;
        return ;
    }
    std::cout << "ScavTrap " << _name << " attacks " << target\
    << " causing " <<  RED << _attack_pt << " points of damage!" << RESET << std::endl;
    _energy_pt--;
}

void ScavTrap::guardGate()
{
    std::cout << YELLOW << "ScavTrap is now in Gatekeeper mode" << RESET << std::endl;
}
