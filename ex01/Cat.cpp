/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:20:35 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/02 13:41:04 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Cat Constructors
Cat::Cat    ( void )
{
    std::cout << "Cat Derived Class Default Constructor" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat    ( Cat const& other )
{
    std::cout << "Cat Derived Class Copy Constructor" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->brain = new Brain();
        *(this->brain) = *(other.getBrain());
    }
}

Cat::~Cat    ( void )
{
    std::cout << "Cat Derived Class Destructor" << std::endl;
    delete this->brain;
}

Cat&    Cat::operator=( Cat const& other )
{
    std::cout << "Cat Derived Class Copy Assignement Operator" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        if (this->brain)
            delete this->brain;
        this->brain = new Brain();
        *(this->brain) = *(other.getBrain());
    }
    return (*this);
}

// Cat member Functions
void    Cat::makeSound ( void ) const
{
    std::cout << "Myaw Myaw Myaw...!!!" << std::endl;
}

Brain*   Cat::getBrain ( void ) const
{
    return (this->brain);
}