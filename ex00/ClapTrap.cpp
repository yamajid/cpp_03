/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yamajid <yamajid@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 13:42:17 by yamajid           #+#    #+#             */
/*   Updated: 2024/01/12 11:54:49 by yamajid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("ClapTrap"), HitPoints(10), EnergyPoints(10), attackDamage(0){
        std::cout << "ClapTrap Default constructor called" << std::endl;    
}

void ClapTrap::attack(const std::string& target) {
    if (HitPoints > 0 || EnergyPoints > 0){
        EnergyPoints--;
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing 1 point of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount){
    if (HitPoints > 0 || EnergyPoints > 0){
        HitPoints -= amount;
        std::cout << name << "Damaged and losed " << amount << " point from the Hit Point, the Energy points now is : "<< EnergyPoints << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    if ((HitPoints > 0 && HitPoints < 10) && (EnergyPoints > 0 && EnergyPoints < 10)){
        EnergyPoints += amount;
        std::cout << name << "Repairing and get " << amount << " point, the Energy points now is : " << EnergyPoints << std::endl;
    }
}
ClapTrap::ClapTrap(std:: string nm): name(nm), HitPoints(10), EnergyPoints(10), attackDamage(0){
    std::cout << " Name contructor called " << std::endl;
}

ClapTrap ::~ClapTrap() {
    std::cout << " Destructor called " << std::endl;
}
