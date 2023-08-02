/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:23:32 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/01 17:29:20 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

// WrongCat Constructors
WrongCat::WrongCat    ( void )
{
    std::cout << "WrongCat Derived Class Default Constructor" << std::endl;
    this->type = "WrongCat";
}

WrongCat::WrongCat    ( WrongCat const& other )
{
    std::cout << "WrongCat Derived Class Copy Constructor" << std::endl;
    (*this) = other;
}

WrongCat::~WrongCat    ( void )
{
    std::cout << "WrongCat Derived Class Destructor" << std::endl;
}

WrongCat&    WrongCat::operator=( WrongCat const& other )
{
    std::cout << "WrongCat Derived Class Copy Assignement Operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// WrongCat member Functions
void    WrongCat::makeSound ( void ) const
{
    std::cout << "Miiiiiiiiiiiia.. !!!" << std::endl;
}