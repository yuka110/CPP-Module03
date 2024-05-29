/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 10:30:02 by yitoh         #+#    #+#                 */
/*   Updated: 2024/05/29 16:40:28 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap April("April");
    ClapTrap May("May");
    ScavTrap June("June");
    ScavTrap August(June);

    std::cout << std::endl << "------------------------" << std::endl;
    April.attack(May.get_name());
    May.takeDamage(April.get_attack_pt());
    May.attack(April.get_name());
    April.takeDamage(May.get_attack_pt());
    April.beRepaired(10);
    
    std::cout << "------------------------" << std::endl << std::endl;
    June.attack(April.get_name());
    April.takeDamage(June.get_attack_pt());
    April.attack(June.get_name());
    May.attack(June.get_name());
    June.takeDamage(May.get_attack_pt());
    June.guardGate();
    June.beRepaired(10);
    August.beRepaired(10);
    return 0;
}