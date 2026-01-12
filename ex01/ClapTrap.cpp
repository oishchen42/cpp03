/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:41:15 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/12 19:17:02 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() :
_name("ClapTrap"),
_health(10),
_energy(10),
_attack(0)
{
    std::cout << MAGENTA ITALIC << "ClapTrap " << _name << " a constructor is called\n" RESET;
}

ClapTrap::ClapTrap(const std::string &name) :
_name(name),
_health(10),
_energy(10),
_attack(0)
{
    std::cout << MAGENTA ITALIC << "ClapTrap " << _name << " a Named constructor is called\n" RESET;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << MAGENTA ITALIC "ClapTrap " << _name << " a Copy constructor called" RESET << std::endl;
    if (this != &other)
    {
        this->_attack = other._attack;
        this->_energy = other._energy;
        this->_health = other._health;
        this->_name = other._name;
    }
}

ClapTrap& ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << MAGENTA ITALIC "ClapTrap " << _name << " an Assignment operator is called\n" << std::endl;
    if (this != &other)
    {
        this->_attack = other._attack;
        this->_energy = other._energy;
        this->_health = other._health;
        this->_name = other._name;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
{
    std::cout << MAGENTA ITALIC "For ClapTrap" << _name << " a destructor is called\n" RESET;
}
}

void ClapTrap::attack(const std::string& target)
{
    if (_energy > 0 && _health > 0)
    {
        _energy--;
        std::cout << ATTACK_MSG;
    }
    else if (_health > 0)
        std::cout << TIRED_MSG;
    else
        std::cout << DEAD_MSG;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_energy > 0 && _health > 0)
    {
        _energy--;
        _health += amount;
        std::cout << REPAIR_MSG;
    }
    else if (_health > 0)
        std::cout << TIRED_MSG;
    else
        std::cout << DEAD_MSG;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_health > 0)
    {
        _health -= amount;
        std::cout << DMG_MSG;
    }
    else
        std::cout << DEAD_MSG;
}