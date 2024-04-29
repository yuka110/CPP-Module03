/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 10:30:02 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/29 14:25:39 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap April("April");
    ClapTrap May("May");
    ScavTrap June("June");
    FragTrap July("July");

    std::cout << "------------------------" << std::endl;
    April.attack(May.get_name());
    May.takeDamage(April.get_attack_pt());
    May.attack(April.get_name());
    April.takeDamage(May.get_attack_pt());
    April.beRepaired(10);

    std::cout << "------------------------" << std::endl;
    June.attack(July.get_name());
    July.takeDamage(June.get_attack_pt());
    July.attack(June.get_name());
    June.takeDamage(July.get_attack_pt());
    June.guardGate();
    June.beRepaired(5);
    July.highFivesGuys();
    // June.highFiveGuys();
    return 0;
}