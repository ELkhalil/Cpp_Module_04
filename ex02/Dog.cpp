/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:16:08 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/02 13:31:26 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Dog Constructors
Dog::Dog    ( void )
{
    std::cout << "Dog Derived Class Default Constructor" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog    ( Dog const& other )
{
    std::cout << "Dog Derived Class Copy Constructor" << std::endl;
    if (this != &other)
    {
        this->type = other.type;
        this->brain = new Brain();
        *(this->brain) = *(other.getBrain());
    }
}

Dog::~Dog    ( void )
{
    std::cout << "Dog Derived Class Destructor" << std::endl;
    delete this->brain;
}

Dog&    Dog::operator=( Dog const& other )
{
    std::cout << "Dog Derived Class Copy Assignement Operator" << std::endl;
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

// Member Functions Dog
void    Dog::makeSound ( void ) const
{
    std::cout << "Howww.. Ha Howww... !!" << std::endl;
}

Brain*   Dog::getBrain ( void ) const
{
    return (this->brain);
}