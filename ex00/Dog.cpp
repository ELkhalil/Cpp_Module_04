/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:16:08 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/01 13:36:45 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Dog Constructors
Dog::Dog    ( void )
{
    std::cout << "Dog Derived Class Default Constructor" << std::endl;
    this->type = "Dog";
}

Dog::Dog    ( Dog const& other )
{
    std::cout << "Dog Derived Class Copy Constructor" << std::endl;
    (*this) = other;
}

Dog::~Dog    ( void )
{
    std::cout << "Dog Derived Class Destructor" << std::endl;
}

Dog&    Dog::operator=( Dog const& other )
{
    std::cout << "Dog Derived Class Copy Assignement Operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Member Functions Dog
void    Dog::makeSound ( void ) const
{
    std::cout << "Howww.. Ha Howww... !!" << std::endl;
}