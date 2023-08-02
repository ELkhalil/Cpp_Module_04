/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:47:36 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/02 17:23:53 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Brain Constructors

Brain::Brain    ( void )
{
    std::cout << "Brain Class Default Constructor" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "Dummy Idea";
    }
}

Brain::Brain   ( Brain const& other )
{
    std::cout << "Brain Class Copy Constructor" << std::endl;
    (*this) = other;
}

Brain::~Brain   ( void )
{
    std::cout << "Brain Class Destructor" << std::endl;
}

// Brain Operators
Brain&  Brain::operator=( Brain const& other )
{
    std::cout << "Brain Class Copy Assignement Operator" << std::endl;
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.getIdeas()[i];
        }
    }
    return (*this);
}

void    Brain::displayIdeas( void ) const
{
    std::cout << "Brain::displayIdeas called so" << std::endl;
    std::cout << "The Availale ideas inside the brain are : " << std::endl;
    for (int i = 0; i < 100; i++)
    {
        std::cout << i << " = " << this->ideas[i] << std::endl;
    }
}

void    Brain::setIdeas (std::string* data, int sizeData)
{
    std::cout << "Brain::setIdeas Called to set the ideas" << std::endl;
    if (!data || !sizeData)
        return ;
    for (int i = 0; i < 100 && i < sizeData ; i++)
    {
        this->ideas[i] = data[i];
    }
}

const std::string*    Brain::getIdeas ( void ) const
{
    return (this->ideas);
}