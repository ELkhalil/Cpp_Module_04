/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:49:23 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 19:13:14 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Character Constructor
Character::Character   ( void )
{
   // std::cout << "Character Default Constructor" << std::endl;
    this->_name = "DefaultCharacter";
    this->_save = NULL;
    for (int i = 0; i < 4; i++)
    {
        _inventory[i] = NULL;
    }
}

Character::Character(std::string const& name)
{
   // std::cout << "Character parametrized Constructor" << std::endl;
    this->_name = name;
    this->_save = NULL;
    for (int i = 0; i < 4; i++) 
    {
        _inventory[i] = NULL;
    }
}

Character::Character(const Character& other)
{
   // std::cout << "Character Copy Constructor" << std::endl;
    if (this != & other)
    {
        this->_name = other.getName();
        for (int i = 0; i < 4; i++)
        {
            AMateria*   otherMateria = other.getInventory(i);
            if (otherMateria != NULL)
                _inventory[i] = otherMateria->clone();
            else
                _inventory[i] = NULL;
        }
    }
}

// Character Operators
Character&  Character::operator=(const Character& other)
{
   // std::cout << "Character Copy Assignement Operator" << std::endl;
    if (this != &other) 
    {
        _name = other.getName();
        for (int i = 0; i < 4; i++) 
        {
            if (_inventory[i])
                delete _inventory[i];
            _inventory[i] = NULL;
        }
        for (int i = 0; i < 4; i++) 
        {
            if (other.getInventory(i) != NULL)
                _inventory[i] = other.getInventory(i)->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return *this;
}

Character::~Character()
{
   // std::cout << "Character Destructor" << std::endl;
    for (int i = 0; i < 4; i++) 
    {
        if (_inventory[i])
            delete _inventory[i];
    }
}

std::string const& Character::getName() const
{
    return (this->_name);
}

void Character::equip(AMateria* m)
{
    int index = 0;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] == NULL)
        {
            _inventory[i] = m;
            return;
        }
        index = i;
    }
    if (index >= 4)
    {
        std::cout << "The inventory is full" << std::endl;
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4) 
    {
        this->_save = _inventory[idx];
        _inventory[idx] = NULL;
    }
    _deleteSaved();
}


void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx] != NULL) {
        _inventory[idx]->use(target);
    }
}

AMateria*   Character::getInventory(int idx) const
{
    if (idx >= 0 && idx < 4)
        return _inventory[idx];
    else
        return NULL;
}

void    Character::_deleteSaved( void )
{
    if (_save)
    {
        delete _save;
        _save = NULL;
    }
}