/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 10:30:07 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/29 14:20:12 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){ 
    std::cout << "ClapTrap is constructed" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    _name = name;
    _hit_pt = 10;
    _energy_pt = 10;
    _attack_pt = 0;
    std::cout << "ClapTrap " << _name << " is constructed -- ";
    std::cout << "Hit:" << _hit_pt << " Energy:" << _energy_pt << " Damage:" << _attack_pt << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << _name << " is destructed" << std::endl;
}

int ClapTrap::get_attack_pt()
{
    return(_attack_pt);
}

std::string ClapTrap::get_name()
{
    return(_name);
}

void ClapTrap::attack(const std::string& target){
    if (_energy_pt <= 0 || _hit_pt <= 0){
        std::cout << YELLOW << "ClapTrap " << _name << ": Attack failed. Hit Points: "\
        << _hit_pt << " Energy Points: "<< _energy_pt << RESET << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " attacks " << target\
    << " causing " <<  RED << _attack_pt << " points of damage!" << RESET << std::endl;
    _energy_pt--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << _name << " receives " << amount << " damage points:(  "\
    << BLUE << "Hit points: " << _hit_pt << " -> " << _hit_pt - amount << RESET << std::endl;
    _hit_pt -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy_pt <= 0 || _hit_pt <= 0){
        std::cout << YELLOW << _name << " can't repair. No Energy Points"\
        << RESET << std::endl;
        return ;
    }
    std::cout << _name << " gets repaird by " << amount << " points!!  "\
    << GREEN << "Hit points:" << _hit_pt << " -> " << _hit_pt + amount << RESET << std::endl;
    _hit_pt += amount;
    _energy_pt--;
}