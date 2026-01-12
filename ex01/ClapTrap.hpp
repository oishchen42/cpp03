/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 17:41:20 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/11 16:16:15 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "color.h"

#define ATTACK_MSG \
    BOLD BLUE << "ClapTrap " << _name << " attacks " \
    << target << ", causing: " << _attack << " points of damage!\n" << RESET

#define REPAIR_MSG \
    BOLD BLUE << "ClapTrap " << _name <<", repairs:" << amount \
    << "points of health!\n" << RESET

#define TIRED_MSG \
    YELLOW BOLD ITALIC << _name \
    << " tired of being what you want it to be\n" RESET

#define DEAD_MSG \
    RED BOLD ITALIC << _name << "'s fight is over, now it rests\n" RESET;

#define DMG_MSG \
    BOLD ITALIC CYAN << _name << " sighs and with words: " \
    << ITALIC "\"if it is my fait...\"" RESET << BOLD ITALIC CYAN \
    << " it takes the damage of: " << amount << RESET << std::endl;

class ClapTrap
{
public:
    ClapTrap();
    ClapTrap(const std::string &name);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    
private:
    std::string _name;
    int _health;
    int _energy;
    int _attack;
};