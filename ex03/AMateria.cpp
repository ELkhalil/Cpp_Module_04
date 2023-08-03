/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:36:41 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 19:13:00 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// AMateria Constructors
AMateria::AMateria      ( void )
{
    // std::cout << "AMateria Default Constructor" << std::endl;
    this->_type = "Default AMateria";
}

AMateria::AMateria      (std::string const & type) : _type(type)
{
    // std::cout << "AMateria Parametrized Constructor" << std::endl;
}

AMateria::AMateria      ( AMateria const& other )
{
    // std::cout << "AMateria Copy Constructor" << std::endl;
    (*this) = other;
}

AMateria::~AMateria   ( void )
{
    // std::cout << "AMateria Destructor" << std::endl;
}

// AMateria Operators
AMateria&   AMateria::operator=( AMateria const& other )
{
    // std::cout << "AMateria Copy Assignement Operator" << std::endl;
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}

// AMateria Member Functions
std::string const&  AMateria::getType() const
{
    return (this->_type);
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "* uses " << this->_type << " materia on " << target.getName() << " *" << std::endl;
}