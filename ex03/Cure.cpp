/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:13:50 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 16:13:04 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

//Cure Constructors
Cure::Cure     ( void )
{
   // std::cout << "Cure Default Constructor" << std::endl;
    this->_type = "cure";
}

Cure::Cure     ( Cure const& other )
{
   // std::cout << "Cure Copy Constructor" << std::endl;
    (*this) = other;
}
Cure::~Cure    ( void )
{
   // std::cout << "Cure Destructor" << std::endl;
}

// Cure Operators
Cure&    Cure::operator=( Cure const& other )
{
   // std::cout << "Cure Copy Assignement Operator" << std::endl;
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}

// Cure Memeber Function
void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

AMateria*   Cure::clone() const
{
    // std::cout << "Cure::clone() Called" << std::endl;
    Cure    *cure = new Cure(); 
    return (cure);
}