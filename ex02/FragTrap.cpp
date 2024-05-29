/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 12:25:56 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/29 16:42:13 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
}

FragTrap::FragTrap(std::string name)
{
    _name = name;
    _hit_pt = 100;
    _energy_pt = 100;
    _attack_pt = 30;
    std::cout << "FragTrap " << _name << " is constructed -- ";
    std::cout << "Hit: " << _hit_pt << " Energy:" << _energy_pt << " Damage:" << _attack_pt << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap " << _name << " is destructed" << std::endl;
}

FragTrap::FragTrap(FragTrap& F) : ClapTrap(F)
{
    std::cout << "FragTrap Copy constructor is called" << std::endl;
    operator=(F);
}

FragTrap& FragTrap::operator=(FragTrap& F){
    if (this == &F)
        return (*this);
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    _name = F.get_name();
    _hit_pt = F.get_hit_pt();
    _energy_pt = F.get_energy_pt();
    _attack_pt = F.get_attack_pt();
    return (*this);
}

void FragTrap::attack(const std::string& target){
    if (_energy_pt <= 0 || _hit_pt <= 0){
        std::cout << "FragTrap " << _name << ": Attack failed. Hit Points: "\
        << _hit_pt << " Energy Points: "<< _energy_pt << RESET << std::endl;
        return ;
    }
    std::cout << "FragTrap " << _name << " attacks " << target\
    << " causing " <<  RED << _attack_pt << " points of damage!" << RESET << std::endl;
    _energy_pt--;
}

void FragTrap::highFivesGuys()
{
    std::cout << YELLOW << "FragTrap HIGH FIVE!" << RESET << std::endl;
}
