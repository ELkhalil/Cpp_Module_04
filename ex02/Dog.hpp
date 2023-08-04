/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:14:00 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/03 10:03:09 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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