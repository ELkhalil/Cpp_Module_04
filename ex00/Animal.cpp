/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:07:39 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/01 13:24:10 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Animal Constructors
Animal::Animal  ( void )
{
    std::cout << "Animal Base Class Default Constructor" << std::endl;
    this->type = "Animal";
}

Animal::Animal  ( Animal const& other)
{
    std::cout << "Animal Base Class Copy Constructor" << std::endl;
    (*this) = other;
}

Animal::~Animal ( void )
{
    std::cout << "Animal Base Class Destructor" << std::endl;
}

// Animal Operators overload
Animal&     Animal::operator=( Animal const& other )
{
    std::cout << "Animal Base Class Copy Assignement Operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

//Animal Member Functions
std::string Animal::getType( void ) const
{
    return (this->type);
}

void    Animal::makeSound ( void ) const
{
    std::cout << "I am an Animal that still have no sound" << std::endl;
}