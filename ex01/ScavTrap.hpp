/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oishchen <oishchen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 13:49:44 by oishchen          #+#    #+#             */
/*   Updated: 2026/01/12 19:35:45 by oishchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

#define ATTACK_MSG_SCV \
    BOLD BLUE << "ScavTrap " << _name << " attacks " \
    << target << ", causing: " << _attack << " points of damage!\n" << RESET

#define TIRED_MSG_SCV \
    YELLOW BOLD ITALIC << "ScavTrap " << _name \
    << " tired of being what you want it to be\n" RESET

#define DEAD_MSG_SCV \
    RED BOLD ITALIC << "ScavTrap " << _name << "'s fight is over, now it rests\n" RESET;

#define GATING_THE_KEEP \
    BOLD BLUE << "Stately, plump ScavTrap " << _name << " came from the stairhead,\n" \
    << "Introibo ad altare Dei. hereby I'm the GATE KEEPER\n" RESET;

#define ALREADY_GATING \
    YELLOW BOLD ITALIC << "Dude, ScavTrap " << _name << " is kinda already gating the keep\n" RESET ;

class ScavTrap : public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(const std::string &name);
    ScavTrap(const ScavTrap &other);
    ~ScavTrap();

    ScavTrap& operator=(const ScavTrap &other);

    void attack(const std::string& target);
    void guardGate();
private:
    bool is_keepgating = false;
};