/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 16:44:46 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/12 19:34:03 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    std::cout << _name << " ScavTrap default constructor called" << std::endl;
    _health = 10;
    _energy = 5;
    _attack = 20;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    std::cout << _name << " ScavTrap named constructor called" << std::endl;
    _health = 10;
    _energy = 5;
    _attack = 20;
};

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << _name << " ScavTrap copy constructor called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (_energy > 0 && _health > 0)
    {
        _energy--;
        std::cout << ATTACK_MSG_SCV;
    }
    else if (_health > 0)
        std::cout << TIRED_MSG_SCV;
    else
        std::cout << DEAD_MSG_SCV;
}

void ScavTrap::guardGate()
{
    if (!is_keepgating)
    {
        is_keepgating = true;
        std::cout << GATING_THE_KEEP;
    }
    else
        std::cout << ALREADY_GATING;
}