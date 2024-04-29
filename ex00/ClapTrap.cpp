/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 10:30:07 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/29 11:44:49 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){ 
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hit_pt = 10;
    _energy_pt = 10;
    _attack_pt = 0;
    std::cout << "ClapTrap " << _name << " is constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destructed" << std::endl;
}

int ClapTrap::get_attack_pt()
{
    return(_attack_pt);
}

void ClapTrap::attack(const std::string& target){
    if (_energy_pt <= 0){
        std::cout << YELLOW << "ClapTrap " << _name << ": Attack failed. No Energy Points"\
        << RESET << std::endl;
        return ;
    }
    std::cout <<  RED << "ClapTrap " << _name << " attacks " << target\
    << " causing " << _attack_pt << " points of damage!" << RESET << std::endl;
    _energy_pt--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << BLUE << "ClapTrap " << _name << " receives " << amount\
    << " damage points:(   Hit points: " << _hit_pt << " -> " << _hit_pt - amount << RESET << std::endl;
    _hit_pt -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_pt <= 0){
        std::cout << YELLOW << "ClapTrap"  << _name << " can't repair. No Energy Points"\
        << RESET << std::endl;
        return ;
    }
    std::cout << GREEN << "ClapTrap " << _name << " gets repaird by " << amount\
    << " points!! Hit points:" << _hit_pt << " -> " << _hit_pt + amount << RESET << std::endl;
    _hit_pt += amount;
    _energy_pt--;
}