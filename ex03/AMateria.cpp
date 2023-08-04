/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:34:39 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/04 16:06:17 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

// AMateria Constructor
AMateria::AMateria  ( void )
{
    // std::cout << "AMateria Default Constructor" << std::endl;
    this->_type = "Default AMateria";
}

AMateria::AMateria  ( std::string const & type ) : _type(type)
{
    // std::cout << "AMateria Parametrized Constructor" << std::endl;
}

AMateria::AMateria  ( AMateria const& other )
{
    // std::cout << "AMateria Copy Constructor" << std::endl;
    (*this) = other;
}

AMateria::~AMateria ( void )
{
    // std::cout << "AMateria Destructor" << std::endl;
}

// AMateria Operators
AMateria&   AMateria::operator= ( AMateria const& other )
{
    // std::cout << "AMateria Copy Assignement Operator" << std::endl;
    if(other.getType() == "ice")
        this->_type = "ice";
    else if (other.getType() == "cure")
        this->_type = "cure";
    else
        this->_type = "Default AMateria";
    return (*this);
}

// AMateria Memeber Functions
std::string const&      AMateria::getType() const
{
    //std::cout << " AMateria::getType()" << std::endl;
    return (this->_type);
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "* AMateria Default use() from" << target.getName() << " *" << std::endl;
}