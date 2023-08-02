/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:25:22 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/01 17:28:11 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

// WrongAnimal Constructors
WrongAnimal::WrongAnimal  ( void )
{
    std::cout << "WrongAnimal Base Class Default Constructor" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal  ( WrongAnimal const& other)
{
    std::cout << "WrongAnimal Base Class Copy Constructor" << std::endl;
    (*this) = other;
}

WrongAnimal::~WrongAnimal ( void )
{
    std::cout << "WrongAnimal Base Class Destructor" << std::endl;
}

// WrongAnimal Operators overload
WrongAnimal&     WrongAnimal::operator=( WrongAnimal const& other )
{
    std::cout << "WrongAnimal Base Class Copy Assignement Operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

//WrongAnimal Member Functions
std::string WrongAnimal::getType( void ) const
{
    return (this->type);
}

void    WrongAnimal::makeSound ( void ) const
{
    std::cout << "I am just a WrongAnimal that still have no sound" << std::endl;
}