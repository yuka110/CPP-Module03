/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: yitoh <yitoh@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2024/04/29 10:30:02 by yitoh         #+#    #+#                 */
/*   Updated: 2024/04/29 13:48:58 by yitoh         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap April("April");
    ClapTrap May("May");

    April.attack(May.get_name());
    May.takeDamage(April.get_attack_pt());
    May.attack(April.get_name());
    April.takeDamage(May.get_attack_pt());
    April.beRepaired(10);
    return 0;
}