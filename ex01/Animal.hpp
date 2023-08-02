/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkhali <aelkhali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:04:25 by aelkhali          #+#    #+#             */
/*   Updated: 2023/08/01 17:01:25 by aelkhali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class   Animal
{
public:
    Animal                  ( void );
    Animal                  ( Animal const& other);
    virtual ~Animal         ( void );
    Animal& operator=       ( Animal const& other );
    std::string getType     ( void ) const;
    virtual void makeSound  ( void ) const;
protected:
    std::string type;
};

#endif