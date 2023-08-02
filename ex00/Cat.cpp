/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:20:35 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/01 13:36:36 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat Constructors
Cat::Cat    ( void )
{
    std::cout << "Cat Derived Class Default Constructor" << std::endl;
    this->type = "Cat";
}

Cat::Cat    ( Cat const& other )
{
    std::cout << "Cat Derived Class Copy Constructor" << std::endl;
    (*this) = other;
}

Cat::~Cat    ( void )
{
    std::cout << "Cat Derived Class Destructor" << std::endl;
}

Cat&    Cat::operator=( Cat const& other )
{
    std::cout << "Cat Derived Class Copy Assignement Operator" << std::endl;
    if (this != &other)
        this->type = other.type;
    return (*this);
}

// Cat member Functions
void    Cat::makeSound ( void ) const
{
    std::cout << "Myaw Myaw Myaw...!!!" << std::endl;
}