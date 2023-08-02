/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:14:00 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/02 11:43:30 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog     ( void );
    Dog     ( Dog const& other );
    ~Dog    ( void );
    Dog&    operator= ( Dog const& other );
    void    makeSound ( void ) const;
    Brain*  getBrain ( void ) const;
private:
    Brain   *brain;
};

#endif