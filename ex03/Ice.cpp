/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:48:27 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 16:12:54 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

//Ice Constructors
Ice::Ice     ( void )
{
    //std::cout << "Ice Default Constructor" << std::endl;
    this->_type = "ice";
}

Ice::Ice     ( Ice const& other )
{
    //std::cout << "Ice Copy Constructor" << std::endl;
    (*this) = other;
}

Ice::~Ice    ( void )
{
    //std::cout << "Ice Destructor" << std::endl;
}

// Ice Operators
Ice&    Ice::operator=( Ice const& other )
{
    //std::cout << "Ice Copy Assignement Operator" << std::endl;
    if (this != &other)
        this->_type = other.getType();
    return (*this);
}

// Ice Memeber Function
void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria*   Ice::clone() const
{
    // std::cout << "Ice::clone() Called" << std::endl;
    Ice     *ice = new Ice();
    return (ice);
}