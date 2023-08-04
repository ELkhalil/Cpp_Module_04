/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:58:59 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 16:06:58 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

// Cure Constructor
Cure::Cure    ( void )
{
    // std::cout << "Cure Default Constructor" << std::endl;
    this->_type = "cure";
}

Cure::Cure    ( Cure const& other )
{
    // std::cout << "Cure Copy Constructor" << std::endl;
    (*this) = other;
}

Cure::~Cure   ( void )
{
    // std::cout << "Cure Destructor" << std::endl;
}

// Cure Operators
Cure&    Cure::operator= ( Cure const& other )
{
    // std::cout << "Cure Copy Assignement operator" << std::endl;
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}

AMateria*   Cure::clone() const
{
    // std::cout << "Cure::clone()" << std::endl;
    Cure    *cure = new Cure(); 
    return (cure);
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}