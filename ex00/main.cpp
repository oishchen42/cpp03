/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:56:02 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/11 16:17:15 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    std::string guy = "CAESER";
    ClapTrap obj;
    ClapTrap obj1("DUDES THE FIRST");
    obj.attack(guy);
    obj.takeDamage(8);
    obj.beRepaired(3);
    // obj.takeDamage(10);
    // obj.takeDamage(11);
    obj.beRepaired(3);
    obj.beRepaired(3);
    obj.beRepaired(3);
    obj.beRepaired(3);
    obj.attack(guy);
    obj.attack(guy);
    obj.attack(guy);
    obj.attack(guy);
    obj.attack(guy);
    obj.attack(guy);
    obj.beRepaired(3);
}