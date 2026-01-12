/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:56:02 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/12 19:31:29 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    std::cout << "### TEST 1: Construction Chain ###" << std::endl;
    std::cout << "Expected: ClapTrap Constructor -> ScavTrap Constructor" << std::endl;
    ScavTrap robot("Serena");

    std::cout << "\n### TEST 2: Attributes & Inheritance ###" << std::endl;
    // 1. Test the Overridden attack (should say "ScavTrap... attacks")
    // Should deal 20 damage (ScavTrap default), not 0 (ClapTrap default)
    robot.attack("Target_Dummy");
    
    // 2. Test inherited functions from ClapTrap
    robot.takeDamage(10);
    robot.beRepaired(10);

    std::cout << "\n### TEST 3: Special Ability ###" << std::endl;
    // Only ScavTrap has this
    robot.guardGate();

    std::cout << "\n### TEST 4: Canonical Form (Copy & Assign) ###" << std::endl;
    // Test Copy Constructor
    std::cout << "--- Creating Clone 1 (Copy Constructor) ---" << std::endl;
    ScavTrap clone1(robot);
    
    // Test Assignment Operator
    std::cout << "--- Creating Clone 2 (Assignment Operator) ---" << std::endl;
    ScavTrap clone2;
    clone2 = robot;
    
    // Verify clones work
    clone1.attack("Clone_Target");

    std::cout << "\n### TEST 5: Destruction Chain ###" << std::endl;
    std::cout << "Expected: ScavTrap Destructor -> ClapTrap Destructor (Reverse Order)" << std::endl;

    return 0;
}