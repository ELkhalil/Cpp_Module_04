/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 12:52:56 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 18:33:56 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

// Character Constructors
Character::Character    ( void )
{
    // std::cout << "Character Default Constructor" << std::endl;
    this->_name = "Default Character";
    this->_reserve = NULL;
    for (int i = 0; i < 4; i++)
    {
       this->_inventoryMA[i] = NULL;
    }
}

Character::Character    ( std::string const& name ) : _name(name)
{
    // std::cout << "Character Parametrized Constructor" << std::endl;
    this->_reserve = NULL;
    for (int i = 0; i < 4; i++)
    {
       this->_inventoryMA[i] = NULL;
    }
}

Character::Character    ( Character const& other )
{
    // std::cout << "Character Copy Constructor" << std::endl;
    (*this) = other;
}

Character::~Character    ( void )
{
    // std::cout << "Character Destructor" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (this->_inventoryMA[i] != NULL)
            delete this->_inventoryMA[i];
    }
    _deleteReservedAMateria();
}

// Character Operators
Character&  Character::operator= ( Character const& other )
{
    // std::cout << "Character Copy Assignement Operator" << std::endl;
    if (this != &other)
    {
        this->_name = other.getName();
        this->_reserve = NULL;
        for (int i = 0; i < 4; i++)
        {
            if (_inventoryMA[i] != NULL)
                delete _inventoryMA[i];
            _inventoryMA[i] = NULL;
        }
        for (int  i = 0; i < 4; i++)
        {
            if (other.getInventory(i) != NULL)
                _inventoryMA[i] = other.getInventory(i)->clone();
            else
                _inventoryMA[i] = NULL;
        }
    }
    return (*this);
}

// Character Methods
std::string const& Character::getName() const
{
    return (this->_name);
}

// MAteria Interaction Methods

void        Character::equip(AMateria* m)
{
    int     count = 0;
    for (int i = 0; i < 4; i++)
    {
        if (_inventoryMA[i] == NULL)
        {
            _inventoryMA[i] = m->clone();
            _deleteReservedAMateria();
            this->_reserve = m;
            return ;
        }
        count++;
    }
    if (count >= 4)
    {
        _deleteReservedAMateria();
        this->_reserve = m;
        std::cout << "The inventory is full" << std::endl;
        std::cout << "The latest AMateria will be lost" << std::endl;
    }
}

void        Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        _deleteReservedAMateria();
        this->_reserve = _inventoryMA[idx];
        _inventoryMA[idx] = NULL;
    }
    _deleteReservedAMateria();
}

void        Character::use(int idx, ICharacter& target)
{
    if (idx >=0 && idx < 4 && _inventoryMA[idx] != NULL)
        this->_inventoryMA[idx]->use(target);
    else if (idx < 0 || idx >= 4)
        std::cout << "Your Input Is Out Of Range" << std::endl;
    else
        std::cout << "** Empty AMateria **" << std::endl;
}

// other usefule Functions
void    Character::_deleteReservedAMateria( void )
{
    if (_reserve)
        delete _reserve;
    _reserve = NULL;
}

AMateria*   Character::getInventory(int idx) const
{
    if (idx >= 0 && idx < 4)
        return _inventoryMA[idx];
    else
        return NULL;
}
