/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:07:39 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/02 17:44:24 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

// AAnimal Constructors
AAnimal::AAnimal  ( void )
{
    std::cout << "AAnimal Base Class Default Constructor" << std::endl;
    this->type = "AAnimal";
}

AAnimal::AAnimal  ( AAnimal const& other)
{
    std::cout << "AAnimal Base Class Copy Constructor" << std::endl;
    (*this) = other;
}

AAnimal::~AAnimal ( void )
{
    std::cout << "AAnimal Base Class Destructor" << std::endl;
}

// AAnimal Operators overload
AAnimal&     AAnimal::operator=( AAnimal const& other )
{
    std::cout << "AAnimal Base Class Copy Assignement Operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

//AAnimal Member Functions
std::string AAnimal::getType( void ) const
{
    return (this->type);
}